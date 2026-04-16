#include<iostream>
#include<queue>
using namespace std;

class PrioQueue {
private:
    queue<string> q1; // priority 1 (highest)
    queue<string> q2; // priority 2
    queue<string> q3; // priority 3 (lowest)

public:
    void enqueue(string s, int prio){
        if(prio == 1) q1.push(s);
        else if(prio == 2) q2.push(s);
        else if(prio == 3) q3.push(s);
    }

    string dequeue(){
        if(!q1.empty()){
            string val = q1.front();
            q1.pop();
            return val;
        }
        else if(!q2.empty()){
            string val = q2.front();
            q2.pop();
            return val;
        }
        else if(!q3.empty()){
            string val = q3.front();
            q3.pop();
            return val;
        }
        return "";
    }

    int size(){
        return q1.size() + q2.size() + q3.size();
    }
};

void prioSched(){
    PrioQueue prioQueue;

    prioQueue.enqueue("E", 3);
    prioQueue.enqueue("F", 2);
    prioQueue.enqueue("G", 1);
    prioQueue.enqueue("H", 1);

    prioQueue.dequeue(); // G removed
    prioQueue.dequeue(); // H removed

    prioQueue.enqueue("I", 1);
    prioQueue.enqueue("J", 1);

    prioQueue.dequeue(); // I removed

    prioQueue.enqueue("K", 2);
    prioQueue.enqueue("L", 3);
    prioQueue.enqueue("M", 1);

    while(prioQueue.size() != 0){
        cout << prioQueue.dequeue() << " ";
    }
}

int main(){
    prioSched();
    return 0;
}
