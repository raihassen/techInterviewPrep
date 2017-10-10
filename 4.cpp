/*Run length encoding of string. See below for example:

aaaaabbbccd => a5b3c2d1
xyz => x1y1z1
*/
#include <iostream>
#include <string>

using namespace std;
char digit2char(int n){
	return char(n+ int('0'));
}
string num2string(int n){
	string ans = "";
	while (n>0){
		ans = digit2char(n%10) + ans;
		n /= 10;
	}
	return ans;
	// return string version of it
} 
string runLength(string s){
	// check for edge cases
	string ans = "";
	if(s.size()==0) return s;
	char last_char = s[0];
	int last_count = 1;
	for (int i=1; i<s.size(); i++){
		if(s[i] != last_char){
			ans = ans + last_char + num2string(last_count);
			last_count = 1;
			last_char = s[i];
		} else {
			last_count++;
		}
	}
	ans = ans + last_char + num2string(last_count);
	return ans;
}
int main(){
	string s;
	cin>>s;
	cout<<"Run length of "<<s<<" is "<<runLength(s);
}
