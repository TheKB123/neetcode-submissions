class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for ( int value : nums )
            if ( !freq.count(value) )
                freq.insert(value);
            else
               return true;
        return false;
    }
};