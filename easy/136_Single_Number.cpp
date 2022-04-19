#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for( int i = 0 ; i < nums.size() ; i += 2 )
        {
            if( (i + 1) >= nums.size() )
                break;
            if( nums[i] != nums[ i + 1 ] )
                return nums[i];
        }
        return nums[ nums.size() - 1 ];
    }
};

int main()
{
    Solution ss;
    vector<int> nums = {4,1,2,1,2};
    
    cout << "singleNumber ? " << ss.singleNumber( nums ) << endl;
    
    return 0;
}