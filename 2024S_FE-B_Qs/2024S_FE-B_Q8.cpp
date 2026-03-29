#include<iostream>
using namespace std;

// We should use names like indexN or maxN instead of index or max,
// because those names may conflict with built-in functions/macros.

int content[5]; // size = max + 1 (ignore index 0)
int indexN = 1;
int maxN = 4;

bool empty(){
    if(indexN == 1){
        return true;
    }
	else{
        return false;
    }
}

bool full(){
    if(indexN > maxN){
        return true;
    } 
	else{
        return false;
    }
}

bool push(int i){
    if(!full()){
        content[indexN] = i;
        indexN = indexN + 1;
        return true;
    } 
	else{
        return false;
    }
}

int pop(){
    if(!empty()){
        indexN = indexN - 1;
        return content[indexN];
    } 
	else{
        return -1;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    
    cout<<pop()<<endl; // 4
    cout<<pop()<<endl; // 3
    cout<<pop()<<endl; // 2
    cout<<pop()<<endl; // 1

    return 0;
}