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
    bool isPowerOfFour(int n) {
        if(n < 1)
            return false;
        
        while(n % 4 == 0)
        {
            n /= 4;
        }
        
        return n == 1;
    }
};

int main()
{
    Solution ss;
    string pattern = "abc";
    string s = "dog cat dog";
    cout << "wordPattern ? " << ss.isPowerOfFour( 45 ) << endl;
    
    return 0;
}