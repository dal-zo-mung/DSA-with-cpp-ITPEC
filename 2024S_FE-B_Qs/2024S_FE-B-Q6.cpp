#include<iostream>
using namespace std;

int cout1(int bit8){
	
	int r = 0;
	for(int i = 1; i<9; i++){
		if((bit8 & (00000001<<(i-1))) != 0000000){
			r += 1;
		}
	}
	
return r;}

int main(){
	int bits = 0b01101101;
	cout<<"This is the ans: "<<cout1(bits)<<endl;
	
	
return 0;
}

