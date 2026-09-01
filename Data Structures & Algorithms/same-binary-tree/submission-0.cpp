/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void helper(TreeNode *p, TreeNode *q, bool &b){
        if(p == nullptr && q == nullptr) return;   
        if(p == nullptr || q == nullptr){b = false; return;}
        if(p->val != q->val) b = false;
        
        helper(p->left, q->left, b);
        helper(p->right, q->right, b);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool b = true;
        helper(p, q, b);
        return b;
    }
};
