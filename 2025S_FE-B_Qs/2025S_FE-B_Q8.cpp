#include<iostream>
#include<string>

using namespace std;

// Global variables (ပုစ္ဆာထဲကအတိုင်း)
char stack[100];
int sp = 0;

void push(char x){
    sp = sp + 1;
    stack[sp] = x;
}

char pop(){
    char retvar = stack[sp];
    sp = sp - 1;
    return retvar;
}

string reverse_string(string inputStr){
    int n = inputStr.length();
    
    // Character တွေကို Stack ထဲ Push လုပ်
	for(int i = 0; i < n; i++){
        push(inputStr[i]);
    }
    
    string outputStr = "";
    
    // Stack ထဲမှာ data ရှိနေသရွေ့ (sp != 0) Pop လုပ်ပြီး ပြန်ထုတ်မယ်
    while(sp != 0){
        char v = pop();
        outputStr += v;
    }
    
    return outputStr;
}

int main(){
    string myStr = "Hello World!";

    cout<<"Reversed: "<<reverse_string(myStr)<<endl;
    
    return 0;
}
