#include<iostream>
using namespace std;

int main(){

  // 0 မှာ question အတိုင်း index 1 က စရအောင်လုပ်ထားခြင်း ဖြစ်သည်။
	int A[5] = {0,3,8,4,6};
	int i,k;
	for(i=2; i<5; i++){
		k = i;
		while(k>1){
			if(A[k-1]<=A[k]){
				break;
			};
			int temp = A[k-1];
			A[k-1] = A[k];
			A[k] = temp;
			
			k = k-1;
		}
	}
	for(i=0; i<5; i++){
		cout<<A[i]<<" ";
	}
	
	return 0;
}
