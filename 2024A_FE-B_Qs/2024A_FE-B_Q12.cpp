#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string S){
	int left = 0; // ဒီမှာ တော့ index 0 ကစပါမယ်။
	int right = S.length()-1; // စလုံး က တော့ ၅ လုံးရှိပေမဲ့၊ index က 0 ကနေ စတာဆို တော့ index 4 ထိဘဲ ရှိပါမယ်။ 
                            // အဲ့တာကြောင့် right ကို index 4 ထိ ဘဲ ယူနိုင်ဖို့ -1 လုပ်ထား ခြင်း ဖြစ်သည်။
	bool ok = true;
	
	while(left<right){
		if(S[left] == S[right]){
			left = left +1; //left += 1; or left++;
			right = right -1;
		}
		else{
			ok = false;
			break;
		}
		
	}
	return ok;
}

int main(){
	
	string str;
	str = " madam "; // enter, As you like;
	
	cout<<"ans: "<<isPalindrome(str); // output will be 1 or 0 and 1 mean true, 0 mean false;
	return 0;
}
