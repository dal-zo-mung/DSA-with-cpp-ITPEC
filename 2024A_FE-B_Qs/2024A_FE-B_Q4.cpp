#include<iostream>
using namespace std;

void primeFactors(int num){
	int i;
	i = 2;
	
	// ထပ် ပေါင်းဖြည့် စွက်ချက်
	if(num%i == 0){	
		
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
		while(num % i == 0);
	}
	
	// ထပ် ပေါင်းဖြည့် စွက်ချက်
	else{ 
		cout<<num;
	}

}

int main(){
	int numbers = 5;
	
	primeFactors(numbers);
	
	return 0;
}
