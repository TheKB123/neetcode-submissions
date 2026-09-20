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
    bool dfs(TreeNode* current, int targetSum) {
        if ( !current || !current->left && !current->right )
            return current && targetSum == current->val;
        return dfs(current->left, targetSum - current->val) || dfs(current->right, targetSum - current->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return root && dfs(root, targetSum);
    }
};