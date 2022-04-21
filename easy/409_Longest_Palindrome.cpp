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
    int longestPalindrome(string s) {
        int mp[128]={0};
        for( int i = 0 ; i < s.length() ; i++ )
        {
            mp[ s[i] ] += 1;
        }
        int len = 0;
        bool ctOne = false;
        for(int i = 0 ; i < 128 ; i++ ){
            if( mp[ i ] % 2 == 0 ){
                len += mp[i];
            }
            else{
                len += ( mp[i] - 1 );
                ctOne = true;
            }
        }
        if( ctOne )
            return len + 1;
        return len;
        /*
       unordered_map<char, int> ump;
        for( int i = 0 ; i < s.length() ; i++ )
        {
            ump[ s[i] ] += 1;
        }
        int sum = 0;
        for(auto it : ump) {
            if(it.second % 2 == 1) {
                sum++;
            }
        }
        
        if( sum > 0)
            sum--;
        
        return s.length() - sum; */
        
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aabb";
    vector<string> magazine;
    
    cout << "longestPalindrome ? " << ss.longestPalindrome( ransomNote ) << endl;
    
    return 0;
}