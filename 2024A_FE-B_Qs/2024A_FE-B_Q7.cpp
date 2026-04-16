#include<iostream>
using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int lcs(string str1,string str2, int m,int n){

  // "||" -> logical operator "Or" ကို ကိုယ်စားပြုသည်။
	if(m == 0 || n == 0){
		return 0;
	}
	if(str1[m-1] == str2[n-1]){
		return 1+lcs(str1, str2, m-1, n-1);
	}
	else{
		return max(lcs(str1, str2, m, n-1),
				   lcs(str1, str2, m-1, n)
				   );
	}
}

int main(){
	
	// ဒီစလုံး နှစ်ခုမှာ "H" တစ်လုံးဘဲ တူနေတော့  output က 1 ဘဲ ထွက်ပါမယ်။
	cout<<lcs("Hello", "Hi", 5, 2);
	
	return 0;
}
