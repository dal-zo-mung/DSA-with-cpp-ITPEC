#include <iostream>
using namespace std;

int GrayBiCon(int x){
    int y = x;
    int z = x;
    
    while (z != 0){
        z = z >> 1; // Bit ကို ညာဘက်သို့ ၁ နေရာရွှေ့ခြင်း  right shift!!
        y = y ^ z;  // XOR logical operator sign -> ^
    }
    return y;
}

int main(){
    // binary value 00001100 ကို ကိုယ်စားပြုရန် -> 0b prefix
    int gray = 0b00001100; 

    cout<<"Binary equivalent (decimal): "<<GrayBiCon(gray)<<endl;
    
    return 0;
}
