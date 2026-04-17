#include <iostream>
#include <string>
//abs() ဆိုတာ Absolute Value (အပေါင်းကိန်း သီးသန့်) ကို ရှာပေးတဲ့ function
#include <cmath> // abs() function သုံးရန်

using namespace std;

// Hamming Distance တွက်ချက်သည့် Function
int hammingDistance(string s1, string s2){
	int distance, length1, length2, minLength, remainingLength;
  	length1 = s1.length();
    length2 = s2.length();
    distance = 0;
    
    // ၁။ အတိုဆုံးအလျားကို အရင်ရှာရန် (minLength)
    minLength = length1;
    if (length2 < length1){ // Ans: A
        minLength = length2;
    }

    // ၂။ တူညီသောနေရာရှိ စာလုံးများကို နှိုင်းယှဉ်ရန်
    for (int i = 0; i < minLength; i++){
        if (s1[i] != s2[i]) { // Ans B: is not equal to
            distance = distance + 1;
        }
    }

    // ၃။ ပိုနေသော စာလုံးအရေအတွက်ကို ရှာရန် (remainingLength)
    if (length1 > length2){
        remainingLength = length1 - length2;
    } else {
        remainingLength = length2 - length1;
    }
	distance = distance + remainingLength; // Ans: C 

    return distance; 
}

int main(){
    // test1: အလျားတူသော်လည်း ၂ နေရာကွာခြားခြင်း
    string str1 = "101010";
    string str2 = "111000";
    cout<<"Test 1: "<<hammingDistance(str1, str2)<<endl;

    // test2: အလျားမတူဘဲ ၅ နေရာကွာခြားခြင်း
    string str3 = "101010";
    string str4 = "111000111";
    cout<<"Test 2: "<<hammingDistance(str3, str4)<<endl;

    return 0;
}
