#include<iostream>
#include<string>

using namespace std;

// Data Structure သတ်မှတ်ခြင်း
struct Node{
    int key;
    int data;
    bool is_undefined; // နေရာလွတ် ဟုတ်/မဟုတ် စစ်ရန်

    Node() : key(0), data(0), is_undefined(true) {} // Default constructor
};

const int SIZE = 1000;
Node hashTable[SIZE + 1]; // Index 1 မှ စသုံးရန် size ကို 1001 ထားသည်

// Hash Function (key mod size) + 1
int hashFunction(int key){
    return (key % SIZE) + 1;
}

// Data ထည့်သွင်းသည့် Procedure
void insertData(int key, int data){
    int index = hashFunction(key);

    // ကွက်လပ် A: hashTable[index] သည် undefined မဖြစ်မချင်း ရှာမည်
    while(hashTable[index].is_undefined == false){
        
        // ကွက်လပ် B: အကယ်၍ array ရဲ့ အဆုံးကို ရောက်သွားလျှင် အစ (1) သို့ ပြန်ပတ်မည်
        if (index == SIZE){
            index = 1; 
        }
        else{
            index = index + 1;
        }
    }

    // နေရာလွတ်တွေ့လျှင် data ထည့်မည်
    hashTable[index].key = key;
    hashTable[index].data = data;
    hashTable[index].is_undefined = false;
}

int main(){
    // စမ်းသပ်ကြည့်ခြင်း
    insertData(123, 5000);
    insertData(1123, 7000); // Collision ဖြစ်စေရန် (1123 % 1000 + 1 = 124 ရမည်)

    cout<<"Data at index 124: "<< hashTable[124].data<<endl;

    return 0;
}
