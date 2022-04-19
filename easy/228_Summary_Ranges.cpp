#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int getEndIdx( vector<int>& nums, int idx ){
        int n = nums.size();
        if( idx >= n )
            return n - 1;
        for( int i = idx ; i < n ; i++ )
        {
            if( (i + 1) >= n )
                return n - 1;
            if( nums[i] != (nums[i + 1] - 1) )
                return i;
        }
        return n - 1;
    }

    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> str;
        int cnt = 0, e;
        for( int i = 0 ; i < nums.size() ; i++ )
        {
            e = getEndIdx( nums, i );
            if( i == e )
                str.push_back( to_string( nums[i] ) );
            else{
                string tmp = to_string( nums[i] ) + "->" + to_string( nums[e] );
                str.push_back( tmp );
                i = e;
            }
        }

        return str;
    }
};

int main()
{
    Solution ss;
    vector<string> str;
    vector<int> nums = {0,1,2,4,5,7};
    str = ss.summaryRanges( nums );
    for( int i = 0 ; i < str.size() ; i++ )
    {
        cout << "convertToTitle ? " << str[i] << endl;
    }
    
    
    return 0;
}