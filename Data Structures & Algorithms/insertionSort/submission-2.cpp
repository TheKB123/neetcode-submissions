// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        int i, j = 0, k, n = pairs.size();
        vector<vector<Pair>> result;
        if ( n <= 0 )
            return {};
        result.push_back(pairs);
        for ( i = 1; i < n; i++ ) {
            result.push_back(result[j++]);
            if ( result[j][i].key < result[j][i-1].key )
                for ( k = i; k > 0; k-- )
                    if ( result[j][k].key < result[j][k-1].key )
                        swap(result[j][k], result[j][k-1]);
                    else
                        break;
        }
        return result;
    }
};
