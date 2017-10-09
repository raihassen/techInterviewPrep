/*
implement a function that given an integer number num, it returns the a string representation of the number, comma separated.
i.e. f(1234) = “1,234”
*/
// questions to ask, should it be seperated by 3?
// can it be seperated differently

string stringRepresentation(int n){
	string ans = "";
	int count = 0;
	while (n){
		if(count ==3){
			count = 0;
			ans = ',' + ans;
		}
		int last_digit = n%10;
		count++;
		ans = char(last_digit) + ans;  
	}
	return ans;
}
