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
    int helper(TreeNode *curr, bool &b){
        if(!curr) return 0;
        int l = helper(curr->left, b);
        int r = helper(curr->right, b);

        if(abs(l - r) > 1) b = false;
        return 1 + max(l, r);
    }

    bool isBalanced(TreeNode* root) {
        bool b = true;
        helper(root, b);
        return b;
    }
};
