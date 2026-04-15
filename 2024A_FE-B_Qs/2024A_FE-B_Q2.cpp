#include<iostream>
using namespace std;

int coupon(int pord_id, int pur_prod){
	int num_coupon = 0;
	
	// A: Product ID ရဲ့ နောက်ဆုံးဂဏန်းက 3 ဖြစ်မဖြစ်စစ်
	if(pord_id % 10 == 3){
		
		// B: ပစ္စည်း ၃ ခုတိုင်းအတွက် ကူပွန် ၁ စောင်တွက်
		num_coupon = pur_prod / 3;
	}
	return num_coupon;
}

int main(){
	
	int id = 123; //နောက်ဆုံးဂဏန်းက ၃ ဖြစ်ရမယ်ပါမယ် ။ 1234 ဆို false ဖြစ်ပြီးcoupon ရမှာမဟုတ်ပါ။
	int brought = 4;	// ၄ ခု ဝယ်တယ်
	
	int Coupon = coupon(id, brought);
	cout<<"Received Coupon: "<<Coupon;
	
	return 0;
}
