class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for ( char ch : t )
            if ( s[j] == ch )
                j++;
        return j == s.size();
    }
};