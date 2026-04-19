#include<iostream>
using namespace std;

int covert(int number){
	int place, n, remainder, decimal;
	decimal = 0;
	place = 1;
	n = number;
	
	while(n>0){
		remainder = n % 10;
		n = n/10;
		decimal = decimal + remainder* place;
		place = 2*place;
	}
	return decimal;
}

int main(){
	
	cout<<covert(5);
	
	return 0;
}
