#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <math.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mySet;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            if( mySet.count( nums[i] ) )
            {
                int mf_idx = mySet[ nums[i] ];
                if( abs(i - mf_idx) <= k )
                    return true;
                mySet[ nums[i] ] = i;
                
            }else{
               mySet[ nums[i] ] = i;
            }
        }
        return false;
    }
};

int main()
{
    Solution pro;
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2} ;
    cout << "containsDuplicate ? " << pro.containsNearbyDuplicate( nums, 3 ) << endl;
    
    return 0;
}