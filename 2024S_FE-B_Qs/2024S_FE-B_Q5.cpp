#include<iostream>
using namespace std;

// နာရီ၊ မိနစ်၊ စက္ကန့် ခွဲထုတ်ပေးတဲ့ function
void convert(int input){
    int hour, minute, second;
    
    // ၁။ စက္ကန့်ကို အရင်ရှာ
    second = input % 60;
    // ၂။ မိနစ်ကို ရှာ (စုစုပေါင်းမိနစ်ထဲကမှ ၆၀ ထက်ကျော်တာကို ဖယ်မယ်)
    minute = (input / 60) % 60;
    // ၃။ နာရီကို ရှာ
    hour = input/3600;

    cout<<"Result (Hour, Minutes, Seconds): "<<hour<<", "<<minute<<", "<<second<<endl;
}

int main(){
    int inputSeconds = 5450;
    cout<<"Input: "<<inputSeconds<<" seconds"<<endl;
    convert(inputSeconds);

    return 0;
}
