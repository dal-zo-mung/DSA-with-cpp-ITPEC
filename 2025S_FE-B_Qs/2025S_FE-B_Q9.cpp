#include<iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isSameTree(TreeNode* p, TreeNode* q){
    // Ans -> A: နှစ်ခုလုံးက NULL(undefined) ဖြစ်နေရင် တူတယ် (True)
    if (p == nullptr && q == nullptr){
        return true;
    }
    
    // Ans -> B: တစ်ခုခုက NULL(undefined) ဖြစ်နေရင် (သို့မဟုတ်) တန်ဖိုးမတူရင် မတူဘူး (False)
    if (p == nullptr || q == nullptr){
        return false;
    }
    
    if (p->val != q->val){
        return false;
    }
    
    bool checkLeft = isSameTree(p->left, q->left);
    bool checkRight = isSameTree(p->right, q->right);
    
    return checkLeft && checkRight;
}

int main(){
    
    // Tree 1
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    // Tree 2
	TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);
    
    // identical (ထပ်တူကျ ခြင်း) ရှိ မရှိ စစ်ခြင်း
    if(isSameTree(root1, root2)) {
        cout<<"Both trees are identical."<<endl;
    } 
	else{
        cout<<"Trees are not identical."<<endl;
    }

    return 0;
}
