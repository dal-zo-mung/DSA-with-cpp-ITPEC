#include<iostream>
#include<queue>
using namespace std;

int graph[5][5] = {
    {0,1,0,1,0},
    {1,0,1,0,1},
    {0,1,0,0,0},
    {1,0,0,0,1},
    {0,1,0,1,0}
};

void traverse(int k){
    queue<int> q;
    bool visited[5] = {false, false, false, false, false};
    
    int v, i;

    // adjust for 0-based index
    q.push(k-1);
    visited[k-1] = true;

    while(!q.empty()){
        v = q.front();
        q.pop();

        cout << v+1 << " "; // print as 1-based

        for(i = 0; i < 5; i++){
            if(graph[v][i] == 1 && visited[i] == false){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main(){
    traverse(1);
    return 0;
}
