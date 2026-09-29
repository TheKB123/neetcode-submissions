class Solution {
public:
    int maxDifference(string s) {
        int Min = INT_MAX, Max = 0;
        vector<int> freq(26, 0);
        for ( char ch : s )
            freq[ch-'a']++;
        for ( char ch : s ) {
            if ( freq[ch-'a'] <= Min && freq[ch-'a'] % 2 == 0 )
                Min = freq[ch-'a'];
            if ( freq[ch-'a'] >= Max && freq[ch-'a'] % 2 == 1 )
                Max = freq[ch-'a'];
        }
        return Max - Min;
    }
};