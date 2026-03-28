#include<iostream>
using namespace std;

int fibo(int n){
	if(n==1 | n==2){
		return n-1;
	}
	else{
		return fibo(n-1) + fibo(n-2);
	}
}

int main(){
	int n =6;
	
	cout<<"This is ans: "<<fibo(n);
	
	return 0;
}