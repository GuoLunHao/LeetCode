#pragma once



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr)
        {
            return false;
        }
        
        sum -= root->val;
        if (root->left == nullptr && root->right == nullptr && sum == 0)
        {
            return true;
        }
        
        return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
};