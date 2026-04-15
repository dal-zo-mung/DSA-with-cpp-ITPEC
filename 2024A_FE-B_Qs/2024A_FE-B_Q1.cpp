#include<iostream>
#include<vector>
using namespace std;

int main(){
    // လက်ရှိလူဦးရေ
    double N[3] = {0, 5000, 100000}; // Index 1 နဲ့ 2 ကိုပဲ သုံး
    
    // Transition Matrix
    double pa = 0.7, pb = 0.02, pc = 0.3, pd = 0.98;
    double P[3][3] = {
        {0, 0, 0}, // ပုစ္ဆာပါ Index 1, 2 အတိုင်း သုံးရန် Row 0 နှင့် Col 0 ကို 0 များဖြင့် ပိတ်ထားပါသည်
        {0, pa, pb}, // Row 1: စီးမယ့်သူဖြစ်လာမည့်နှုန်းများ
        {0, pc, pd}  // Row 2: မစီးမည့်သူဖြစ်လာမည့်နှုန်းများ
    };

    // A အတွက် တွက်ချက်ပုံ
    double cycling = P[1][1] * N[1] + P[1][2] * N[2];
    
    // B အတွက် တွက်ချက်ပုံ
    double noncycling = P[2][1] * N[1] + P[2][2] * N[2];

    cout << "Next year cyclists: " << cycling << endl;
    cout << "Next year non-cyclists: " << noncycling << endl;

    return 0;
}

