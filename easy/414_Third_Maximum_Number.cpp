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
    static bool comp(int a,int b){
       return a>b;
    }
    int thirdMax(vector<int>& nums) {
            
        sort(nums.begin(),nums.end(), comp);
        if(nums.size()<=2){
            return nums[0];
        }else{
            int count = 0;
            for( int i = 1 ; i < nums.size() ; i++ )
            {
                if( nums[ i - 1 ] > nums[i] ){
                    count++;
                }
                if( count == 2 ){
                    return nums[i];
                }
            }
        }
        return nums[0];
    }
};

int main()
{
    Solution ss;
    vector<int> nums = {3,2,1};

    cout << "thirdMax ? " << ss.thirdMax( nums ) << endl;
    
    return 0;
}