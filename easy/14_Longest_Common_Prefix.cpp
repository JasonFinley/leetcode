#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int i, j;
        string base_str = strs[0];
        string return_str = "";
        char ch;

        for( i = 0 ; i < base_str.length() ; i++ )
        {
            ch = base_str[i];
            for( j = 1 ; j < n ; j++ )
            {
                if( i >= strs[j].length() || strs[j][i] != ch )
                    break;
            }
            if( j < n )
                break;
            return_str += ch;
        }

        return return_str;
    };
};

int main()
{
    Solution ss;
    vector<string> str;
//    str.push_back( "ab" );
//    str.push_back( "a" );

    str.push_back( "flower" );
    str.push_back( "flow" );
    str.push_back( "flight" );

//    str.push_back( "flower" );
//    str.push_back( "flower" );
//    str.push_back( "flower" );
//    str.push_back( "flower" );
  cout << ss.longestCommonPrefix( str ) << endl;
  return 0;
}