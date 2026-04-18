#include<iostream>
using namespace std;

//global
int stck[10];
int tos = 0;

// push function
void push(int item){
    if(tos == 10){
        cout << "Stack is Full\n";
    }
    else{
    	//Ans: A
        tos = tos + 1; // tos++;
        stck[tos] = item;
    }
}

// pop function
int pop(){
	int item;
	
    if(tos < 1){
        cout << "Stack is Empty\n";
        return -1; // undefined
    }
    else{
    	//ans: B
    	item = stck[tos];
        tos = tos -1; // tos--;
        return item;
    }
}

int main(){
    push(10);
    push(20);
    push(30);

    cout << pop() << endl; // 30
    cout << pop() << endl; // 20
    cout << pop() << endl; // 10

    return 0;
}
