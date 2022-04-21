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
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        int i;
        for( i = 0 ; i < ransomNote.length() ; i++ )
        {
            mag[ ransomNote[i] ] += 1;
        }

        for( i = 0 ; i < magazine.length() ; i++ )
        {
            if( mag.find( magazine[i] ) != mag.end() )
            {
                mag[ magazine[i] ] -= 1;
            }
        }

        for( i = 0 ; i < mag.size() ; i++ )
        {
            if( mag[i] >= 1 )
                return false;
        }
        return true;
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aa";
    string magazine = "aab";
    ss.canConstruct( ransomNote, magazine );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}