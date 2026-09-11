class Solution {
public:
    void backtracking(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, vector<bool>& visited) {
        if ( current.size() >= nums.size() ) {
            result.push_back(current);
            return;
        }
        for ( int i = 0; i < nums.size(); i++ )
            if ( !visited[i] ) {
                visited[i] = 1;
                current.push_back(nums[i]);
                backtracking(nums, result, current, visited);
                current.pop_back();
                visited[i] = 0;
            }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        vector<bool> visited(nums.size());
        backtracking(nums, result, current, visited);
        return result;
    }
};
