struct TripleHash {
    size_t operator()(const array<int, 3>& t) const {
        size_t h = 0;
        for ( int v : t )
            h ^= hash<int>{}(v) + 0x9e3779b9 + ( h << 6 ) + ( h >> 2 );
        return h;
    }
};
array<int, 3> canonical(int a, int b, int c) {
    array<int, 3> t{a, b, c};
    sort(t.begin(), t.end());
    return t;
}
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, j, n = nums.size();
        unordered_map<int, int> nums_map;
        vector<vector<int>> res;
        unordered_set<array<int, 3>, TripleHash> triplets;
        for ( int num : nums )
            nums_map[num]++;
        for ( i = 0; i < n; i++ )
            for ( j = 0; j < n; j++ )
                if ( i != j && !triplets.count(canonical(-nums[i]-nums[j], nums[i], nums[j])) && nums_map[-nums[i]-nums[j]] > ( nums[i] == -nums[i]-nums[j] ) + ( nums[j] == -nums[i]-nums[j] ) ) {
                    res.push_back({-nums[i]-nums[j], nums[i], nums[j]});
                    triplets.insert(canonical(-nums[i]-nums[j], nums[i], nums[j]));
                }
        return res;
    }
};
