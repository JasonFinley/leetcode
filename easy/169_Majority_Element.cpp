#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort( nums.begin(), nums.end() );
        return nums[ nums.size()/2 ];
    }
};

int main()
{
    Solution ss;
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << "convertToTitle ? " << ss.majorityElement( nums ) << endl;
    
    return 0;
}