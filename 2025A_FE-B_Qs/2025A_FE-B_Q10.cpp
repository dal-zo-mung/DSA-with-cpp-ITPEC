#include<iostream>
#include<string>
using namespace std;

class Element{
public:
    string data;
    Element* next;

    Element(string d){
        data = d;
        next = nullptr;
    }
};

void insertAfter(Element* head, string targetData, string newData){
    Element* x = head;

    while (x != nullptr){
        if (x->data == targetData){
            Element* y = new Element(newData);

            y->next = x->next;
            x->next = y;

            cout << "Inserted '" << newData << "' after '" << targetData << "'" << endl;
            return;
        }
        x = x->next;
    }
    cout << "Target data not found!" << endl;
}

// print list
void printList(Element* head){
    while(head != nullptr){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){
    // Create list: A -> B -> C
    Element* head = new Element("A");
    head->next = new Element("B");
    head->next->next = new Element("C");

    printList(head);

    insertAfter(head, "B", "X");

    printList(head);

    return 0;
}
