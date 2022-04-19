#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        char c;

        while( columnNumber > 0 ){
            c = (columnNumber - 1 )%26 ;
            ans = (char)( c + 'A' ) + ans;
            columnNumber = (columnNumber - 1) / 26;
        }

        return ans;
    }
};

int main()
{
    Solution ss;
    cout << "convertToTitle ? " << ss.convertToTitle( 99 ) << endl;
    
    return 0;
}