#include<iostream>
using namespace std;

void isPalindrome(string str){
	int i, j, len;
	bool flag;
	flag = true;
	
	len = str.length();
	i = 0; // in the text book, i is start with 1
	j = len-1; // in the text book, j = len; <- because i is start with 1
	
	while(i < len/2 ){
		if(str[i] != str[j]){
			flag = false;
			break;
		}
		i++;		//i = i+1;
		j--;		//j = j-1;
	}
	if(flag){
		cout<<str<<" - is a palindrome.";
	}
	else{
		cout<<str<<" - is not a palindrome.";
	}
	
}
int main(){
	string text;
	text = "madam";
	
	isPalindrome(text);
	
	return 0;
}