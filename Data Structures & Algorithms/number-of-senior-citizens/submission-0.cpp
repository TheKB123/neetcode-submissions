class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;
        for ( string s : details )
            c += ( s[11] > '6' || ( s[11] == '6' && s[12] > '0' ) );
        return c;
    }
};