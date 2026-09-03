class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for ( char ch : s )
            if ( ( ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z' ) || ( ch >= '0' && ch <= '9' ) )
                if ( ch < 'A' || ch > 'Z' )
                    s1 += ch;
                else
                    s1 += ch - 'A' + 'a';
        int n = s1.size() - 1;
        cout << s1 << "\n";
        for ( int i = 0; i <= n / 2; i++ )
            if ( s1[i] != s1[n-i] )
                return 0;
        return 1;
    }
};
