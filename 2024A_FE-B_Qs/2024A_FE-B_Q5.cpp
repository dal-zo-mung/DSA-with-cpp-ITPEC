#include<iostream>
#include<cmath>
using namespace std;

double calcGeoMean(double dataArray[], int arrN){
	double product, geomean;
	
	int n = arrN;
	int i;
	product = 1;
	
	//မေးခွန်းမှာ index က 1 ကနေစပေမဲ့ C++ / IDE တွေမှာ တော့ index 0 ကစလို့ index 1 နေရာမှာ index 0 သုံးခြင်း ဖြစ်သည်။
	for(i=0; i<n; i++){
		product = product * dataArray[i];
	}
	geomean = pow(product, 1.0/n);
	
	return geomean;
}
int main(){
	
	double array[4] = {1,2,3,4};
	
	cout<<calcGeoMean(array, 4);
	
	return 0;
}
