#include<iostream>
#include<cmath> // must add for -> sqrt
using namespace std;

void findRoots(int a, int b, int c){
	int discriminant, root1, root2;
	
	discriminant = b*b-4*a*c;
	
	if(discriminant>0){
		
		// quadratic equation!
		root1 = (-b +sqrt(discriminant))/(2*a);
		root2 = (-b -sqrt(discriminant))/(2*a);
		
		cout<<"root1 = "<<root1<<" and root2 = "<<root2;
	}
	else if(discriminant==0){
		root1 = -b/(2*a);
		cout<<"root1 = root2 = "<< root1;
	}
	else{
		cout<<"Roots are complex (not real)";
	}
}

int main(){
	
	findRoots(1,-3,2);  //esample
	
	return 0;
}
