class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            if ( a[0] == b[0] )
                return a[1] < b[1];
            return a[0] < b[0];
        });
        for ( const auto& p : intervals )
            if ( ans.size() && ans.back()[1] >= p[0] ) {
                ans.back()[1] = max(ans.back()[1], p[1]);
            } else
                ans.push_back(p);
        return ans;
    }
};
