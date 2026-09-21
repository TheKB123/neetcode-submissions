class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        vector<int> visited(words.size() + 1, 0);
        for ( int i = 0; i < words.size(); i++ )
            for ( int j = 0; j < words.size(); j++ )
                if ( i != j && !visited[j] && words[i].find(words[j]) != string::npos ) {
                    ans.push_back(words[j]);
                    visited[j] = 1;
                }
        return ans;
    }
};