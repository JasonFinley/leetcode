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
    bool isPerfectSquare(int num) {
        int mid, l = 1 ;
        int r = num;
        while( l <= r )
        {
            mid = l + ( r - l )/2;
            if( mid == (num/mid) && num%mid == 0 ) 
                return true;
            else if(mid < num/mid)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return false;
    }
};

int main()
{
    Solution ss;
    vector<int> n1;
    vector<int> n2;
    ss.isPerfectSquare( 16 );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}