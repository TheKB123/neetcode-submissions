class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams_map;
        vector<vector<string>> anagrams_result;
        vector<string> anagrams_keys;
        for ( string str : strs ) {
            string strkey = str;
            sort(strkey.begin(), strkey.end());
            if ( !anagrams_map.count(strkey) )
                anagrams_keys.push_back(strkey);
            anagrams_map[strkey].push_back(str);
        }
        for ( const auto& anagrams_key : anagrams_keys ) {
            anagrams_result.emplace_back();
            for ( const auto& anagram : anagrams_map[anagrams_key] )
                anagrams_result.back().push_back(anagram);
        }
        return anagrams_result;
    }
};
