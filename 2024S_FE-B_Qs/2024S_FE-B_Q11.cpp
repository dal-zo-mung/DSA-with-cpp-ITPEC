#include<iostream>
using namespace std;

int main(){
		   //index->0,  1,  2, 3, 4
	int data[5] = {12, 11, 13, 5, 6};
	int i, j, temp, minPos;
	int size = 5;
	
	for (i=0; i<size-1; i++){
		minPos = i;
		for(j=i+1; j<size; j++){
			if(data[j]<data[minPos]){
				minPos = j;
			}
		}
		temp = data[i];
		data[i] = data[minPos];
		data[minPos] = temp;	
	}	
	
	for (i=0; i<size; i++){
		cout<<data[i]<<" ";
	}
	return 0;
}