#include<iostream>
using namespace std;

bool isLeapYear(int year){
	if(year % 400 == 0){
		return true;
	}
	else if(year%100 ==0){
		return false;
	}
	else if(year % 4 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	cout<<isLeapYear(2000); // if the ans is "true" -> the output is = 1 and 
							// if the ans is "false"	-> the output is = 0;
	return 0;
}
