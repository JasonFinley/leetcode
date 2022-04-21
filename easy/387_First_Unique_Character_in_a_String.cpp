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
    int firstUniqChar(string s) {
        unordered_map<char, int> ma;
        for( int i = 0 ; i < s.length() ; i++ )
        {
            ma[ s[i] ] += 1;
        }
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( ma[s[i]] == 1 )
                return i;
        }
        return -1;
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aabb";
    string magazine = "aab";
    ss.firstUniqChar( ransomNote );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}