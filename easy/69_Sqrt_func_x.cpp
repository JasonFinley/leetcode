#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int l, r, mid;
        if (x <= 1) return x;
        l = 0, r = x;
        while( l < r )
        {
            mid = l + (r - l)/2;
            if( x / mid >= mid ){
                l = mid + 1;
            }else{
                r = mid;
            }
        }
        return r - 1;
    }
};

int main()
{
    Solution ss;
    cout << "mySqrt ? " << ss.mySqrt( 99 ) << endl;
    
    return 0;
}