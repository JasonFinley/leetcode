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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> cah( nums1.begin(), nums1.end() );
        for( int i = 0 ; i < nums2.size() ; i++ )
        {
            if( cah.find( nums2[i] ) != cah.end() )
            {
                ans.push_back( nums2[i] );
                cah.erase(nums2[i]);
            }
        }
        return ans;
        
        /*int i, j;
        vector<int> ans;
        unordered_set<int> cah();
        for( i = 0 ; i < nums1.size() ; i++ )
        {
            if( cah.find( nums1[i] ) != cah.end() )
            {
                continue;
            }

            for( j = 0 ; j < nums2.size() ; j++ )
            {
                if( nums1[i] == nums2[j] )
                {
                    cah.insert( nums1[i] );
                    ans.push_back( nums1[i] );
                    break;
                }
            }
        }
        return ans;*/
    }
};

int main()
{
    Solution ss;
    vector<int> n1;
    vector<int> n2;
    ss.intersection( n1, n2 );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}