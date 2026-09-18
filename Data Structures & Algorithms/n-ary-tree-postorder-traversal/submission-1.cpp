/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void dfs(Node* current, vector<int>& leafs) {
        for ( Node* child : current->children )
            dfs(child, leafs);
        leafs.push_back(current->val);
    }
    vector<int> postorder(Node* root) {
        if ( !root )
            return {};
        vector<int> leafs;
        dfs(root, leafs);
        return leafs;
    }
};