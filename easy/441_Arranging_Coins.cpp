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
    int arrangeCoins(int n) {
        int l = 0;
        int r = n;
        while( l <= r )
        {
           long long mid = l + ( r - l )/2;
           long long tmp = (mid * ( mid + 1 ))/2;
            
            if( tmp == n ) return mid;
            else if( tmp > n ) r = mid - 1;
            else l = mid + 1;
        }
        return r;
        
        /*int k=0;
        while( n > 0 )
        {
            k++;
            n -= k;
        }
        return n==0 ? k : k-1 ;*/
    }
};

int main()
{
    Solution ss;
    string num1 = "123456789";
    string num2 = "987654321";
//    string num1 = "11";
//    string num2 = "123";

    cout << "thirdMax ? " << ss.arrangeCoins( 123 ) << endl;
    
    return 0;
}