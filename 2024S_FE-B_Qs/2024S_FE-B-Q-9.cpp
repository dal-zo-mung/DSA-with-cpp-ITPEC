#include <iostream>
#include <stack>
using namespace std;

// Define Node structure
struct Node {
    char info;
    Node* left;
    Node* right;

    Node(char val) {
        info = val;
        left = NULL;
        right = NULL;
    }
};

// Iterative Preorder Traversal
void preorder(Node* root) {
    if (root == NULL) return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* v = st.top();
        st.pop();

        cout << v->info << " ";

        // Push right first
        if (v->right != NULL) {
            st.push(v->right);
        }

        // Push left second
        if (v->left != NULL) {
            st.push(v->left);
        }
    }
}

int main() {
    /*
        Example Tree:
              A
             / \
            B   C
           / \
          D   E
    */

    Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');
    root->left->left = new Node('D');
    root->left->right = new Node('E');

    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}