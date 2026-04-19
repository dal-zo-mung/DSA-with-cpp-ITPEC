#include<iostream>
using namespace std;

bool isPerfect(int n){
	int k;
	int sum = 0;
	int half = n/2;
	
	for(k = 1; k<half; k++){
		if(n%k ==0){
			sum = sum + k;
		}
	}
	if(sum = n){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	
	// if the ans is "true" -> the output is = 1 and 
	// if the ans is "false"	-> the output is = 0;
	cout<<isPerfect(28);   // output-> 1;
	
	return 0;
}
