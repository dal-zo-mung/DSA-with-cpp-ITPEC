#include <iostream>
using namespace std;

int sumDigits(int num) {
    int sum = 0;
    
    while (num > 0) {
        // A: နောက်ဆုံးဂဏန်းကိုယူပြီး sum ထဲပေါင်းမယ်။
        sum = sum + (num % 10); 
        // B: နောက်ဆုံးဂဏန်းကို ဖြတ်ထုတ်မယ်။
        num = num / 10; 
    }
    return sum;
}

int main() {
    int n = 456;
    cout << "Sum of digits of " << n << " is: " << sumDigits(n) << endl;
  
    return 0;
}
