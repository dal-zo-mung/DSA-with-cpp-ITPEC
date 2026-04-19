#include<iostream>
#include<cmath>
using namespace std;

int calc(int x, int y){
	return pow(pow(x, 0.5)+pow(y,0.5),2);
}
int main(){
	
	cout<<calc(4,9);
	
	return 0;
}
