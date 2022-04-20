#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.length() != t.length())
            return false;
        unordered_map<int, int> myMap;

        for( int i = 0 ; i < s.length() ; i++ )
        {
            myMap[ s[i] ] += 1;
        }

        for( int i = 0 ; i < t.length() ; i++ )
        {
            myMap[ t[i] ] -= 1;
            if( myMap[ t[i] ] < 0 )
                return false;
        }
        return true;

/*        if( s.length() != t.length())
            return false;

        sort( s.begin(), s.end() );
        sort( t.begin(), t.end() );
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if( s[i] != t[i] )
                return false;
        }
        return true;
        */
    }
};

int main()
{
    Solution ss;
    string s1 = "anagram";
    string s2 = "nagaram";

    cout << "convertToTitle ? " << ss.isAnagram( s1, s2 ) << endl;
    
    return 0;
}