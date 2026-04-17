#include<iostream>
using namespace std;

int sum(int array[],int n, int k, int m){
	int s = 0;
	int i = k;
	
	while(i<=m){
		if(array[n]%2 == 0){
			s = s+array[i];
		}
		i = i+1;
	}
	return s;
}

int main(){
	int array[2] = {2, 4};
	int n =2;
	cout<<sum(array, n, 2, 4);
		
	return 0;
}
