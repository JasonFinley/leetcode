#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid;

        while( start <= end )
        {
            mid = start + (end - start)/2;
            if( nums[mid] == target )
                return mid;
            else if( nums[mid] < target )
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start;
    }
};

int main()
{
    Solution ss;
    vector<int> arr = {1,3,5,6};

    cout << "strstr ? " << ss.searchInsert( arr, 5 ) << endl;
    
    return 0;
}