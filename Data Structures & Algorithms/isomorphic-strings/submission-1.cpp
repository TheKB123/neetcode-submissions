class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> map_st, map_ts;
        for ( int i = 0; i < s.size(); i++ ) {
            if ( ( map_st.count(s[i]) && map_st[s[i]] != t[i] ) || ( map_ts.count(t[i]) && map_ts[t[i]] != s[i] ) )
                return 0;
            map_st[s[i]] = t[i];
            map_ts[t[i]] = s[i];
        }
        return 1;
    }
};