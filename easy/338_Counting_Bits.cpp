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
    vector<int> countBits(int n) {
        vector<int> ans;
        int sum = 0;
        for( int i = 0 ; i <= n ; i++ )
        {
            int sum = 0;
            int num = i;
            while( num != 0 )
            {
                sum += num % 2;
                num = num / 2;
            }
            ans.push_back( sum );
        }
        return ans;
    }
};

int main()
{
    Solution ss;
    string pattern = "abc";
    string s = "dog cat dog";
    ss.countBits( 45 );
//    cout << "wordPattern ? " << ss.countBits( 45 ) << endl;
    
    return 0;
}