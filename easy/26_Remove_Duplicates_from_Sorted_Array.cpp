#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, idx;
        idx = 0;
        for( i = 0 ; i < nums.size() ; i++ )
        {
            if( nums[idx] != nums[i] ){
                idx += 1;
                nums[idx] = nums[i];
            }else
                nums[idx] = nums[i];
        }

        return (idx + 1);
    }
};

int main()
{
    Solution ss;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout << "nums ? " << ss.removeDuplicates( nums ) << endl;
    
    return 0;
}