#include<iostream>
#include<string> // Best practice -> string သုံးဖို့ include လုပ်ရပါမယ်။
using namespace std;

string grade(int score){
	string ret;
	if(score >= 80){
		ret = "D";
	}
	else if(score >= 50){
		ret = "P";
	}
	else{
		ret = "F";
	}
	return ret;
}	

int main(){
	int mark = 79;
	
	string output = grade(mark);
	cout<<"This is result: "<<output;
	
	return 0;
}
