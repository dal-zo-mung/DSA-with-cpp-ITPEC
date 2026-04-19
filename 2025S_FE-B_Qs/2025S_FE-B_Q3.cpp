#include<iostream>
using namespace std;

int GCD(int x, int y){
	int m = x;
	int n = y;
	
	while(m != n){
		if(m>n){
			m = m-n;
		}
		else{
			n = n-m;
		}
		cout<<m<<", "<<n<<endl;
	}
	return m;
}

int main(){
	cout<<GCD(98,56);
	return 0;
}
