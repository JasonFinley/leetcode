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
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
    int guess(int num)
    {
        if( num == 5 )
            return 0;
        else if( num < 5 )
            return -1;
        else
            return 1;
    }
public:
    int guessNumber(int n) {
        int l = 0, mid;
        int r = n;
        while( l <= r )
        {
            int val;
            mid = l + ( r - l )/2;
            val = guess(mid);
            if( val == 0 )
                return mid;
            else if( val == -1 )
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
                
        }
        return mid + 1;
    }
};

int main()
{
    Solution ss;
    vector<int> n1;
    vector<int> n2;
    ss.guessNumber( 16 );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}