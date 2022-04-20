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

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    bool isBadVersion( int verson ){
        bool base[] = { true, true, true, true, true, true, false, false, false, false, false, false, false };
        if( verson > 13 )
        return base[ verson ];
    }
public:
    int firstBadVersion(int n) {
        int mid, ans;
        int l = 0;
        int r = n;
        if( n <= 1 )
            return 1;
        while( l <= r )
        {
            mid = l + ( r - l )/2;
            if( isBadVersion( mid ) )
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
            
        }
        return ans;
    }
};

int main()
{
    Solution ss;
    string s1 = "anagram";
    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    cout << "convertToTitle ? " << ss.firstBadVersion( nums[0] ) << endl;
    
    return 0;
}