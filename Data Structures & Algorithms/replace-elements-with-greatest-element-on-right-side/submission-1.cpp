class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i, n = arr.size();
        for ( i = n - 2; i >= 0; i-- )
            arr[i] = max(arr[i], arr[i+1]);
        for ( i = 0; i < n - 1; i++ )
            arr[i] = arr[i+1];
        arr[n-1] = -1;
        return arr;
    }
};