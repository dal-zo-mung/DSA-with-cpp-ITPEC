#include<iostream>
#include<cmath>		// abs() နဲ့ pow() သုံးဖို့
#include<iomanip>	// ဒသမနေရာ အတိအကျကြည့်ဖို့
using namespace std;

double m_sin(double x){
	double vn = x;
	double k = 1;
	double sum = vn;
	double epsi = 1e-7; // 10^-7 ကို ရေးနည်း

	// C++ မှာ abs() ဆိုတာ Absolute Value (ပကတိတန်ဖိုး) ကို ရှာပေးတဲ့ function ဖြစ်ပါတယ်။
	// -> အပေါင်းကိန်းထည့်ရင် အပေါင်းအတိုင်းပဲ ထွက်လာမယ်။ အနှုတ်ကိန်းထည့်ရင် အပေါင်းကိန်းအဖြစ် ပြောင်းသွားမယ်။
	while(abs(vn)>epsi){
		k = k + 2; // k += 2;
		vn = -vn * (x * x) / ((k - 1) * k);
		sum = sum + vn; //sum += vn;
	}
	return sum;
}

int main(){
	double input = 1.5708; // U can edit the value.
    cout<<"sin("<<input<<") is approx: "<<setprecision(7)<<m_sin(input)<<endl;
	return 0;
}
