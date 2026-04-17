#include<iostream>
using namespace std;

void subArraySum(int arr[], int n, int targetSum){
	int sum, start, end;
	int N = n;
	bool found = false;
	
	for (start = 0; start<N; start++){
		sum = 0;
		for (end = start; end<N; end++){
			sum = sum + arr[end];
			
			if (sum == targetSum){
				cout<<"Subarrays "<<start<<" "<< end<<endl;
				found = true;
			}
			else if(sum>targetSum){
				break;
			}
		}
	}
	if(!found){
		cout<<"No subarray Found!";
	}

}

int main(){
	int arr[8] = {6,3,2,5,1,1,7,3};
	int n = 8;
	
	subArraySum(arr, n, 7);
	
	return 0;
}
