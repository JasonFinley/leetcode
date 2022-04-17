#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, idx = 0;
        for( i = 0 ; i < nums.size() ; i++ )
        {
            if( nums[i] != val ){
                nums[idx] = nums[i];
                idx += 1;
            }
        }
        return idx;
    }
};

int main()
{
    Solution ss;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout << "nums ? " << ss.removeElement( nums, 2 ) << endl;
    
    return 0;
}