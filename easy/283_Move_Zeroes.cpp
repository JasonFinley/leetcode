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
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 1;
        while( j < nums.size() )
        {
            if( nums[i] == 0 )
            {
                if( nums[j] != 0 )
                {
                    //swap( nums[i], nums[j] );                    
                    nums[i] = nums[j];
                    nums[j] = 0;
                    i++;
                }
                j++;
            }else{
                i++;
                j++;
            }
        }
      /*  int i = 0, j = 1;
        while( j < nums.size() )
        {
            if( nums[i] == 0 && nums[j] == 0 )
            {
                j++;
            }
            else if( nums[i] == 0 && nums[j] != 0 )
            {
                swap( nums[i], nums[j] );
                i++;
                j++;
            }
            else if( nums[i] != 0 && nums[j] == 0 )
            {
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }*/
    }
};

int main()
{
    Solution ss;
    string s1 = "anagram";
    vector<int> nums = {0,1,0,3,12};
    ss.moveZeroes( nums );
//    cout << "convertToTitle ? " << ss.moveZeroes( nums ) << endl;
    
    return 0;
}