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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++)
            map[nums1[i]]++;
        
        for(int i = 0; i < nums2.size(); i++)
        {
            if(map[nums2[i]] >= 1) {
                ans.push_back(nums2[i]);
                map[nums2[i]]--;   
            }
        }
        return ans;
    }
};

int main()
{
    Solution ss;
    vector<int> n1;
    vector<int> n2;
    ss.intersect( n1, n2 );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}