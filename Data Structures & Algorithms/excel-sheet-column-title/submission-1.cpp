class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnName, aux;
        do
            aux += ( 'A' + ( ( columnNumber - 1 ) % 26 ) );
        while ( columnNumber > 26 && ( columnNumber /= 26 ) );
        for ( int i = aux.size() - 1; i >= 0; i-- )
            columnName += aux[i];
        return columnName;
    }
};