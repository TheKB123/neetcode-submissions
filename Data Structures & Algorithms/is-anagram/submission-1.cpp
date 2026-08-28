class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.length() != t.length() )
            return 0;
        vector<int> freq(26, 0);
        for ( int i = 0; i < s.length(); i++ ) {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for ( const auto& i : freq )
            if ( i != 0 )
                return 0;
        return 1;
    }
};
