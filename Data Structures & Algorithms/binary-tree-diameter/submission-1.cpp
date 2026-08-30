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
    int postorder(TreeNode* root, int &d){
        if(root == nullptr) return 0;
        int l = postorder(root->left, d);
        int r = postorder(root->right, d);
        d = max(d, l + r);
        return 1 + std::max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        postorder(root, res);
        return res;
    }
};
