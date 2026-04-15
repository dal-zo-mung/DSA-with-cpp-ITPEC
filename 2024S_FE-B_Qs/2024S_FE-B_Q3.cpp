#include<iostream>
using namespace std;

int main(){
	int i;
	int sum = 0;
	
	for(i = 1; i<101; i++){
		if(i%2 == 0){
			cout<< i<<" ";
			sum = sum + i;
		}
	}
	cout<<"\n"<<"Total count: "<<sum;
	
	return 0;
}
