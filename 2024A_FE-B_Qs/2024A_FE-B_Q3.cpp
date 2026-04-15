#include<iostream>
#include<cmath> // for use -> INT_MIN 
using namespace std;


int main(){
	int array[6] = {2,6,9,1,7,5};
	int i;

  //( INT_MIN means integer minimum (is has -2,147,483,648 value) that one of the C++ Math constant!
  //That has also INT_MAX and the constant value is 2,147,483,648!
	int max1 = INT_MIN;
	int max2 = INT_MIN;
	
	for (i = 0; i<6; i++){
		if(array[i]>max1){
			max2 = max1;
			max1 = array[i];
		}
		else if(array[i] > max2){
			max2 = array[i];
		}
	}
	cout<<"Output of max2: "<<max2;
  
	return 0;
}
