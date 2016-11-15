#pragma once
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    int maxLevel(TreeNode* root) {
        if (root == nullptr)
        {
            return 0;
        }

        return max(maxLevel(root->left), maxLevel(root->right)) + 1;
    }
    void DFS(vector<vector<int>>& res, TreeNode* node, int level) {
        if (node == nullptr)
        {
            return;
        }
        res[this->MaxLevel - level].push_back(node->val);
        DFS(res, node->left, level + 1);
        DFS(res, node->right, level + 1);
    }
    inline int max(int a, int b)
    {
        return a > b ? a : b;
    }
    int MaxLevel;
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        this->MaxLevel = this->maxLevel(root);

        vector<vector<int>> res(this->MaxLevel);
        DFS(res, root, 1);

        return res;
    }
};