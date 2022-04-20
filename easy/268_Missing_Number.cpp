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
    int missingNumber(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        int ans = 0;
        for( int i = ans ; i < nums.size() ; i++ )
        {
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
};

int main()
{
    Solution ss;
    string s1 = "anagram";
    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    cout << "convertToTitle ? " << ss.missingNumber( nums ) << endl;
    
    return 0;
}