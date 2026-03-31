#include <iostream>
using namespace std;

struct ListElement{
    int val;
    ListElement* next;

    // Constructor
    ListElement(int newItem){
        val = newItem;
        next = nullptr;
    }
};

// Global head pointer
ListElement* listHead = nullptr;

void insert(int newItem){
    ListElement* newNode = new ListElement(newItem);

    // Case 1: Empty list
    if(listHead == nullptr){
        listHead = newNode;
        newNode->next = listHead; // circular link
    }
    else{
        ListElement* tmp = listHead;

        // Traverse to the last node
        while(tmp->next != listHead){
            tmp = tmp->next;
        }

        // Insert new node at the end
        tmp->next = newNode;
        newNode->next = listHead;
    }
}

// Helper function to display the list
void printList(int count){
    if(listHead == nullptr)
	
	return;

    ListElement* temp = listHead;
    for (int i = 0; i < count; i++){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<< "... (circular)"<<endl;
}

int main(){
    insert(10);
    insert(20);
    insert(30);

    printList(3); // print more than size to show circular behavior

    return 0;
}