// question is taken from http://www.geeksforgeeks.org/bloomberg-interview-set-1-phone-interview/
// I try to solve the first question in the link
/*
implement a function that given an integer number num, it returns the a string representation of the number, comma separated.
i.e. f(1234) = “1,234”
*/
// questions to ask, should it be seperated by 3?
// can it be seperated differently
char num2char(int n){
	return char(n+'0');
}

string stringRepresentation(int n){
	string ans = "";
	int count = 0;
	while (n){
		if(count ==3){
			count = 0;
			ans = ',' + ans;
		}
		int last_digit = n%10;
		n/=10;
		count++;
		ans = num2char(last_digit) + ans;  
	}
	return ans;
}
/*
The interviewer then asked that the function should support different comma styles, i.e. the US vs Indian style
//Indian 1000000 -> 10,00,000
//US 1000000 -> 1,000,000

I suggested that a certain style should be passed to the function, either as an integer mask or a vector of integers, representing the positions at which a comma is needed.
He asked if only a string abbreviation can be sent to the function instead of a vector, so I suggested using a map, which stores for each style code the corresponding vector of integers.
*/

string numRepresentation(int num, string style_name){
	map<string, vector<int> > style_info;
	style_info["EN"] = {3, 6, 9, 12, 15};
	style_info["IN" = {3, 5, 7, 9, 11, 13}];
	int count = 0;
	int nextCommaId = 0;
	string ans = "";
	while (num){
		if(count==nextCommaId){
			ans = ',' + ans;
			count = 0;
			nextCommaId++;
		}
		int last_digit = num%10;
		num/=10;
		ans = num2char(last_digit) + ans;
	}
	return ans;
}
