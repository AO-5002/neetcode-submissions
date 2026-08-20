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
    int postorder(TreeNode* curr, int& d){
        if(curr == nullptr) return 0;
        int l = postorder(curr->left, d);
        int r = postorder(curr->right, d);
        d = max(d, l + r);
        return max(l, r) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        postorder(root, res);
        return res;
    }
};
