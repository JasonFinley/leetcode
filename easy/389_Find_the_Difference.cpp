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
    char findTheDifference(string s, string t) {
        int i, sum = 0;
        for( i = 0 ; i < t.length() ; i++ )
        {
            sum += t[i];
        }
        for( i = 0 ; i < s.length() ; i++ )
        {
            sum -= s[i];
        }
        return (char)sum;
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aabb";
    string magazine = "aab";
    ss.findTheDifference( ransomNote, magazine );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}