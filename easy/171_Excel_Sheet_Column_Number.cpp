#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i = 0;
        int sum = 0;
        for( i = 0 ; i < columnTitle.length() ; i++ )
        {
            sum = sum*26 + (columnTitle[i] - 'A') + 1;
        }
        return sum;
    }
};

int main()
{
    Solution pro;
    string str = "ZY";
    cout << "convertToTitle ? " << pro.titleToNumber( str ) << endl;
    
    return 0;
}