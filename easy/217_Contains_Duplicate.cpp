#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_set>
#include <math.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        if( nums.size() <= 1 ) return false;

        sort( nums.begin(), nums.end() );

        for( int i = 1 ; i < nums.size() ; i++ )
        {
            if( nums[i - 1] == nums[i] )
                return true;
        }
        return false;
/*        unordered_set<int> mySet;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            if( mySet.count( nums[i] ) )
                return true;
            mySet.insert( nums[i] );
        }
        return false;*/
    }
};

int main()
{
    Solution pro;
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2} ;
    cout << "containsDuplicate ? " << pro.containsDuplicate( nums ) << endl;
    
    return 0;
}