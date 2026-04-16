#include <iostream>
using namespace std;

// ListNode class သတ်မှတ်ခြင်း
class ListNode{
public:
    char val;
    ListNode* next;

    ListNode(char v){
        val = v;
        next = nullptr;
    }
};

// Global listHead
ListNode* listHead = nullptr;

void addNode(int pos, char val) {
    ListNode* newNode = new ListNode(val);
    ListNode* prev;

    if (pos == 1){
        // အရှေ့ဆုံးမှာ ထည့်ခြင်း
        newNode->next = listHead;
        listHead = newNode;
    }
	else{
        // ထည့်မည့်နေရာ၏ အရှေ့က node ကို ရှာခြင်း
        prev = listHead;
        for (int i = 2; i <= pos - 1; i++){
            if (prev != nullptr){
                prev = prev->next;
            }
        }
        
        // ကွင်းဆက် ချိတ်ဆက်ခြင်း
        newNode->next = prev->next;
        prev->next = newNode; // ကွက်လပ် -> ans-> (prev.next)
    }
}

void printList(){
    ListNode* temp = listHead;
    while (temp != nullptr){
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    addNode(1, 'A'); // A
    addNode(2, 'C'); // A -> C
    addNode(2, 'B'); // A -> B -> C (Position 2 မှာ B ကို ညှပ်ထည့်ခြင်း)
    
    printList();
    return 0;
}
