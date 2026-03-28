#include<iostream>
#include<cmath>
using namespace std;

double calcSim(int v1[], int v2[], int n){
    int i, x, y;
    int sxx = 0;
    int syy = 0;
    int sxy = 0;

    for (i = 0; i < n; i++) {
        x = v1[i];
        y = v2[i];
		sxx = sxx + x * x;	// sxx += x * x;
		syy = syy + y * y;	// syy += y * y;
		sxy = sxy + x * y;	// sxy += x * y;
    }

    return (double)sxy / sqrt(sxx * syy);
}

int main(){
    int v1[] = {2, 2, 1, 0, 4};
    int v2[] = {3, 1, 1, 1, 2};
    int n = 5;

    double result = calcSim(v1, v2, n);

    cout<<"Similarity = "<<round(result*10)/10<<endl;

    return 0;
}
