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
    bool isSubsequence(string s, string t) {
        int idx=0;
        for( int i = 0 ; i < t.length() ; i++ )
        {
            if( t[i] == s[idx] ) 
                idx++;
        }
        if(idx == s.length())
            return true;
        return false;
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aabb";
    string magazine = "aab";
    ss.isSubsequence( ransomNote, magazine );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}