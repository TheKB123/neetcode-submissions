class Solution {
public:
    char delim = '#', esc = '\\';
    string encode(vector<string>& strs) {
        string s;
        for ( int k = 0; k < strs.size(); k++ ) {
            for ( char ch : strs[k] ) {
                if ( ch == '#' || ch == esc )
                    s.push_back(esc);
                s.push_back(ch);
            }
            s.push_back(delim);
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string current;
        int i = 0, n = s.size();
        while ( i < n )
            if ( s[i] == esc ) {
                i++;
                if ( i < n )
                    current.push_back(s[i++]);
            } else if ( s[i] == delim ) {
                res.push_back(current);
                current.clear();
                i++;
            } else
                current.push_back(s[i++]);
        return res;
    }
};
