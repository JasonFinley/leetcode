#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if( n <= 2 )
            return n;
        int res = 0;
        int n0 = 1;
        int n1 = 2;
        for( int i = 2 ; i < n ; i++ )
        {
            res = n0 + n1;
            n0 = n1;
            n1 = res;
        }
        return res;
    }
};

int main()
{
    Solution ss;
    cout << "climbStairs ? " << ss.climbStairs( 45 ) << endl;
    
    return 0;
}