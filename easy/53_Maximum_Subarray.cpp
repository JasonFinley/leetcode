#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, cur, maxV;
        int sum = 0;
        maxV = cur = nums[0];
        for( i = 1 ; i < nums.size() ; i++ )
        {
            cur = max( cur + nums[i], nums[i] );
            maxV = max( cur, maxV );
        }
        return maxV;        
    }
};

int main()
{
    Solution ss;
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};

    cout << "maxSub ? " << ss.maxSubArray( arr ) << endl;
    
    return 0;
}