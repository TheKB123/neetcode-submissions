class Solution {
public:
    bool isAnagram(string s, string t) {
        if ( s.length() != t.length() )
            return 0;
        unordered_map<char, int> map;
        unordered_set<char> chars;
        string res;
        for ( int i = 0; i < s.length(); i++ ) {
            map[s[i]]++;
            map[t[i]]--;
            if ( !chars.contains(s[i]) ) {
                chars.insert(s[i]);
                res += s[i];
            }
        }
        for ( char ch : res )
            if ( map[ch] != 0 )
                return 0;
        return 1;
    }
};
