#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int i = 0, j = 0;
        while( i < m || j < n )
        {
            if( i >= m && j < n ){
                res.push_back( nums2[j] );
                j++;
                continue;
            }
            if( i < m && j >= n){
                res.push_back( nums1[i] );
                i++;
                continue;
            }
            if( nums1[i] <= nums2[j] ){
                res.push_back( nums1[i] );
                i++;
            }else{
                res.push_back( nums2[j] );
                j++;
            }
        }
        nums1 = res;
    }
};

int main()
{
    Solution ss;
    vector<int> arr1 = { 1,2,3,0,0,0 };
    int am = 3;
    vector<int> arr2 = { 2,5,6 };
    int an = 3;
    ss.merge( arr1, am, arr2, an );
    for( int i = 0 ; i < arr1.size() ; i++ )
    {
        cout << "arr1 ? " << arr1[i] << endl;
    }
    
    return 0;
}