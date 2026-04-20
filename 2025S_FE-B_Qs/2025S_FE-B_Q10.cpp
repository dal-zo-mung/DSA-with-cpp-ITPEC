#include <iostream>
#include <string>

using namespace std;

struct ListElement {
    int data;
    ListElement *next;
    ListElement *prev;
    
    // Constructor 
    ListElement(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// Global head pointer
ListElement* listHead = nullptr;

// နောက်ဆုံး element ကို ဖျက်သည့် Procedure (ပုစ္ဆာ Q10 logic)
void deleteLast() {
    // Case 1: List က အလွတ်ဖြစ်နေရင်
    if (listHead == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    ListElement* current = listHead;

    // A: ညာဘက်အစွန်း (နောက်ဆုံး node) ကို ရောက်အောင်သွားမယ်
    while (current->next != nullptr) {
        current = current->next;
    }

    // Case 2: List မှာ node အများကြီး ရှိနေရင်
    if (current->prev != nullptr) {
        // B: နောက်ဆုံး node ရဲ့ ရှေ့ကကောင်ရဲ့ next ကို NULL လုပ်မယ်
        current->prev->next = nullptr;
        delete current; // Memory ဖျက်မယ်
        cout << "Last element deleted." << endl;
    } 
    // Case 3: List မှာ node တစ်ခုတည်းပဲ ရှိရင်
    else {
        listHead = nullptr;
        delete current;
        cout << "Only element deleted. List is now empty." << endl;
    }
}

// List ထဲက data တွေကို ထုတ်ကြည့်ဖို့ (Helper function)
void displayList() {
    ListElement* temp = listHead;
    if (!temp) {
        cout << "List is empty." << endl;
        return;
    }
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // စမ်းသပ်ရန် data ၃ ခု
    listHead = new ListElement(10);
    listHead->next = new ListElement(20);
    listHead->next->prev = listHead;
    listHead->next->next = new ListElement(30);
    listHead->next->next->prev = listHead->next;

    cout << "Initial List: ";
    displayList();

    // နောက်ဆုံးက 30 ကို detele
    deleteLast();
    displayList();

    // နောက်ဆုံးက 20 ကို detele
    deleteLast();
    displayList();

    return 0;
}
