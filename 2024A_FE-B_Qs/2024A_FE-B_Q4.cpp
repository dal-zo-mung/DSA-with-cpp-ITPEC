#include<iostream>
using namespace std;

void primeFactors(int num){
	int i;
	i = 2;
	//	ပုစ္ဆာက ပေးထားချက်။
	do{				
		if(num % i == 0){
			num = num/i;
			cout<<i;
		
			if(num>1){
					cout<<"x";				
				}
			}	
		else{
			i = i + 1;
		}	
	}
	while(num>1);
}

int main(){
	int numbers = 78;
	
	primeFactors(numbers);
	
	return 0;
}
