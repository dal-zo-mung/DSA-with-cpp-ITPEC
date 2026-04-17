#include<iostream>
using namespace std;

int findmode(int arr[],int a){
	int n = a;
	int m = arr[0];
	int m_c = 1;
	int c, i, j;
	for (i = 0; i<n; i++){
		c = 1;
		for (j=i+1; j< n; j++){
			if(arr[i]==arr[j]){
				c = c+1;
			}
		}
		if(m_c<c){
			m_c = c;
			m = arr[i];
		}
	}
	return m;
}

int main(){
	int arr[9] = {2, 1, 1, 9, 6, 6, 2, 5, 6};
	int n = 9;
	cout<<findmode(arr, n);
	return 0;
}
