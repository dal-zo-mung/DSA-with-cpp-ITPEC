#include<iostream>
#include<vector>

using namespace std;

// Global variables သတ်မှတ်ခြင်း
int n = 5;
// Graph ကို Adjacency Matrix ဖြင့် ဖော်ပြခြင်း (Question ပေးထားတဲ့အတိုင်း Index 1 မှ စနိုင်ရန် 6x6 သတ်မှတ်သည်)
int graph[6][6] = {
    {0, 0, 0, 0, 0, 0}, // Index 0 (မသုံးပါ)
    {0, 0, 1, 0, 1, 0}, // Node 1 ချိတ်ဆက်မှုများ: 2, 4
    {0, 1, 0, 1, 0, 1}, // Node 2 ချိတ်ဆက်မှုများ: 1, 3, 5
    {0, 0, 1, 0, 0, 0}, // Node 3 ချိတ်ဆက်မှုများ: 2
    {0, 1, 0, 0, 0, 1}, // Node 4 ချိတ်ဆက်မှုများ: 1, 5
    {0, 0, 1, 0, 1, 0}  // Node 5 ချိတ်ဆက်မှုများ: 2, 4
};

bool visited[6] = {false, false, false, false, false, false};

void traverse(int k){
    visited[k] = true;
    cout << k << " "; // Output vertex number

    for (int i = 1; i <= n; i++) {
        // အကယ်၍ edge ရှိပြီး အဲဒီ vertex ကို မရောက်ဖူးသေးရင်
        if (graph[k][i] == 1 && visited[i] == false) {
            traverse(i); // Recursive call (DFS)
        }
    }
}

int main(){
    cout<<"Output in the order: ";
    traverse(1); // traverse(1) အဖြစ် ခေါ်ယူခြင်း
    
    return 0;
}
