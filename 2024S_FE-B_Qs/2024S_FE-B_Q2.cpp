#include<iostream>
using namespace std;

int ticketPrice(int age, bool isMember){
	int ret;
	if(((age <= 10)or(age >= 60)) or isMember){
		ret = 10;
	}
	else{
		ret = 20;
	}
	return ret;
}

int main(){
	int age = 30;
	bool Member = false;
	
	int output = ticketPrice(age, Member);
	cout<<"This is the result: "<<output;
	
	return 0;
}
