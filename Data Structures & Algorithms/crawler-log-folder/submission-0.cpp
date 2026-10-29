class Solution {
public:
    int minOperations(vector<string>& logs) {
        int level = 0;
        for ( const auto& log : logs )
            if ( log == "./" ) {
                continue;
            } else if ( log == "../" ) {
                level = ( level ) ? level - 1 : 0;
            } else
                level++;
        return level;
    }
};