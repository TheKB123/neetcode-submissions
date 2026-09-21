class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        size_t Min = strs[0].size(), i, j;
        for ( i = 1; ( Min && i < strs.size() ); i++ ) {
            Min = min(Min, strs[i].size());
            for ( j = 0; j < Min; j++ )
                if ( strs[0][j] != strs[i][j] ) {
                    Min = min(Min, j);
                    break;
                }
        }
        return strs[0].substr(0, Min);
    }
};