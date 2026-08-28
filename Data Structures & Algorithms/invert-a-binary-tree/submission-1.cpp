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
    TreeNode* invertTree(TreeNode* root) {
        if ( !root )
            return nullptr;
        TreeNode* leftaux = root->left;
        TreeNode* rightaux = root->right;
        if ( root->left ) {
            root->right = invertTree(root->left);
            if ( !rightaux )
                root->left = nullptr;
        }
        if ( rightaux ) {
            root->left = invertTree(rightaux);
            if ( !leftaux )
                root->right = nullptr;
        }
        return root;
    }
};
