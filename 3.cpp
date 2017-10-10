/*
Bracket matching:
You are given a string consisting of brackets and other characters. You have to tell if it is a well balanced string. See below for example:
"(aa)bb" -> true
"[ aa [ bbb ]" -> false
"aa } bbb { c" -> false
"aa [ bb () ]" -> true
"[aa { ] cc } ]" -> false

*/

#include <iostream>
#include <vector>
using namespace std;
bool isOpen(char ch){
	return (ch =='(' || ch=='{' || ch == '[');
}

bool isClosed(char ch){
	return (ch ==')' || ch=='}' || ch == ']');
}

bool isPair(char open, char closed){
	if (open == '('){
		return (closed == ')');
	}
	if (open == '{'){
		return (closed == '}');
	}
	if (open == '['){
		return (closed == ']');
	}
}

bool isBalanced(string s){
	vector<char> openBrackets;
	for (int i=0; i<s.size(); i++){
		if (isOpen(s[i])){
			openBrackets.push_back(s[i]);			
		} else{
			if (isClosed(s[i])){
				if ((openBrackets.size() == 0) || (isPair(openBrackets[openBrackets.size()-1], s[i])==false)){
					return false;
				} else{
					openBrackets.pop_back();
				}
			}
		}
	}
	return (openBrackets.size() == 0);
}
int main(){
 string s;
cin>>s;
cout<<isBalanced(s);
}
