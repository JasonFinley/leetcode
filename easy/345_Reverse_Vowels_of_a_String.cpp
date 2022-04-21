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
    bool isSp( char c )
    {
        if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
          c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        while( i < j )
        {
            if( isSp( s[i] ) )
            {
                if( isSp( s[j] ) )
                {
                    swap( s[i], s[j] );
                    i++;
                }
                j--;
            }
            else if( isSp( s[j] ) )
            {
                if( isSp( s[i] ) )
                {
                    swap( s[i], s[j] );
                    j--;
                }
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};

int main()
{
    Solution ss;
    vector<char> s;
//    string s = "dog cat dog";
    string aa = "asdw wdaldjksa qwdhlk a s";
    ss.reverseVowels( aa );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}