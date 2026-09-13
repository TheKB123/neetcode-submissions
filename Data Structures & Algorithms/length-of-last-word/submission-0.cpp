class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool spaces = 0;
        for ( char ch : s )
            if ( ch == ' ' )
                spaces = 1;
            else
                if ( !spaces )
                    length++;
                else {
                    length = 1;
                    spaces = 0;
                }
        return length;
    }
};