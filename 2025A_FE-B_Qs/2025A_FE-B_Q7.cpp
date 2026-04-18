#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

//recursive reverse
Node* reverseList(Node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	Node* newHead = reverseList(head->next);
	
	head->next->next = head;
	head->next = NULL;
	
	return newHead;
}

//Print List
void printList(Node* head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main(){
	// create list: 1 -> 2-> 3
	Node* head = new Node{1, NULL};
	head->next = new Node{2, NULL};
	head->next->next = new Node{3, NULL};
	
	cout<<"Original: ";
	printList(head);
	
	head = reverseList(head);
	
	cout<<"\n Reversed: ";
	printList(head);
	
	return 0;
}
