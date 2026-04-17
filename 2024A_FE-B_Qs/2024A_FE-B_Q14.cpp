#include<iostream>
#include<cmath>
using namespace std;

double findRank(double sortedData[],int n, double q){
	int j;
	j = floor(q*(n-1));
	return sortedData[j];
} 
void summarize(double sortedData[], int n){
//	double rankData[0] = {};
	double q[5] = {0, 0.25, 0.5, 0.75, 1};
	
	int i;
	for(i = 0; i<5; i++){
		cout<<findRank(sortedData, n, q[i])<<" ";
	}
}

int main(){
	
	double arr[10] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1};
	
	summarize(arr, 10);
	
	
	return 0;
}
