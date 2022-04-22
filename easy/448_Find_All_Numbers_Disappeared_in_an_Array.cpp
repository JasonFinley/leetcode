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

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++ )
        {     
            int temp = nums[i];
            if( temp < 0 )
                temp = -1*temp;
//            cout << "temp ? " << nums[i]  << " " << temp - 1 << " " << nums[ temp - 1 ] << endl;
            if( nums[ temp - 1 ] > 0 )
                nums[ temp - 1 ] = -1*( nums[ temp - 1 ] );
        }

        for(int i = 0 ; i < nums.size() ; i++)
        {   
//            cout << "nums[i] ? " << nums[i] << endl;
            if( nums[ i ] > 0 ){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};

int main()
{
    Solution ss;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans;
//    string num1 = "11";
//    string num2 = "123";
    ans = ss.findDisappearedNumbers( nums );
//    cout << "thirdMax ? " << ss.findDisappearedNumbers( 123 ) << endl;
    
    return 0;
}