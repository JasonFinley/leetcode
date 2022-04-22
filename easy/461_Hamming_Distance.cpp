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
    int hammingDistance(int x, int y) {
        long int d=0;
        int i = x , j = y;
        while( i > 0 || j > 0 )
        {
            if( ( i & 1 ) != ( j & 1) )
                d++;
            i=i>>1;
            j=j>>1;
        }
        return d;
    }
};

int main()
{
	string s = "asdfghasdfghasdfgh"; 
	Solution sol;

	int ans = sol.hammingDistance( 4, 9 );
	
    cout << ans << endl;

    return 0;
}