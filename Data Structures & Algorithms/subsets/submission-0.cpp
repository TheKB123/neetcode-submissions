class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        queue<pair<vector<int>, int>> q;
        q.push(make_pair(vector<int>{}, 0));
        result.push_back({});
        while ( !q.empty() ) {
            auto [heap, order] = q.front();
            if ( order < nums.size() ) {
                q.push(make_pair(heap, order + 1));
                heap.push_back(nums[order]);
                q.push(make_pair(heap, order + 1));
                result.push_back(heap);
            }
            q.pop();
        }
        return result;
    }
};
