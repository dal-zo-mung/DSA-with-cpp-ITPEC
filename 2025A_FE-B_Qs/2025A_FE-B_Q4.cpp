#include<iostream>
using namespace std;

void reverse_digits(int num){
	int rev = 0;
	int rm = 0;
	int temp = num;
	
	while(temp>0){ // Ans: A
		rm = temp % 10; 
		rev = rev*10+rm; //Ans: B
		temp = temp/10; //Ans: C
	}
	cout<<"Number is "<<num<<endl<<"The reverse output: "<< rev;
}

int main(){
	reverse_digits(12);
	return 0;
}
