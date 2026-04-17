#include<iostream>
#include<cmath>  // sqrt(), pow() စတဲ့ math functions တွေ သုံးဖို့ math library ခေါ်ခြင်း
using namespace std;

void printPrime(int N){
	int count, number, i;
	bool isPrime;
	count = 1;
	number = 2;
	while(count<=N){
		isPrime = true;
		for(i=2; i<sqrt(number); i++){ //  square root of number လို့ ပေးထားတာကြောင့် sqrt() သုံး
			isPrime = false;	
			break;
		}
		if(isPrime = true){
			cout<<"This is Prime Number: "<<N;
			count = count + 1; // count++; 0r count += 1;
			break;
		}
	}
}

int main(){
	int Num = 7;
	printPrime(Num);
	
	return 0;
}
