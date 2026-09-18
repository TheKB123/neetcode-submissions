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
    void dfs(TreeNode* current, vector<int>& nums) {
        if ( !current )
            return;
        nums.push_back(current->val);
        dfs(current->left, nums);
        dfs(current->right, nums);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nums;
        dfs(root, nums);
        return nums;
    }
};