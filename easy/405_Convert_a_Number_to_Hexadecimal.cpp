#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <sstream>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        string ans = "";
        char hex[] = { '0', '1', '2', '3', '4', '5', '6', '7',
                        '8', '9','a', 'b', 'c', 'd', 'e', 'f' };
        if( num == 0 )
            return "0";
        unsigned int n = num;

        while( n > 0 )
        {
            ans = hex[ n % 16 ] + ans;
            n /= 16;
        }

        return ans;
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aabb";
    vector<string> magazine;
    ransomNote = ss.toHex( 5 );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}