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

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> vec;
        stringstream str(s);
        string tmp;
        while( getline(str, tmp, ' ') )
            vec.push_back(tmp);
    
        if( vec.size() != pattern.size() )
            return false;

        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        for( int i = 0 ; i < pattern.length() ; i++ )
        {
            if( map1.find( pattern[i] ) ==  map1.end() && map2.find( vec[i] ) == map2.end() )
            {
                map1[ pattern[i] ] = vec[i];
                map2[ vec[i] ] = pattern[i];
            }
            else
            {
                if( map2[ vec[i] ] != pattern[i] )
                    return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution ss;
    string pattern = "abc";
    string s = "dog cat dog";
    cout << "wordPattern ? " << ss.wordPattern( pattern, s ) << endl;
    
    return 0;
}