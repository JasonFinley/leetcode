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

    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for( int i = 1 ; i <= n ; i++ )
        {
            string str;
            if( i % 3 == 0 && i % 5== 0 )
                str = "FizzBuzz";
            else if( i % 3 == 0 )
                str = "Fizz";
            else if( i % 5 == 0 )
                str = "Buzz";
            else
                str = to_string(i);

            ans.push_back(str);

        }
        return ans;
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aabb";
    vector<string> magazine;
    magazine = ss.fizzBuzz( 15 );
//    cout << "longestPalindrome ? " << ss.fizzBuzz( 15 ) << endl;
    
    return 0;
}