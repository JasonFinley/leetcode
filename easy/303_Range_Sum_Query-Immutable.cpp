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


class NumArray {
    vector<int> _db;
public:
    NumArray(vector<int>& nums) {
        int sum = 0;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            sum += nums[i];
            _db.push_back( sum );
        }
    }
    
    int sumRange(int left, int right) {
        if( left == 0 )
            return _db[ right ];
        return _db[ right ] - _db[ left - 1 ];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main()
{
//    Solution ss;
//    string pattern = "abc";
//    string s = "dog cat dog";
//    cout << "wordPattern ? " << ss.wordPattern( pattern, s ) << endl;
    
    return 0;
}