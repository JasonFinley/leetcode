#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        while( n > 0 )
        {
            if( n & 1 )
                cnt++;
            n = n >> 1;
        }
        return cnt;
    }
};

int main()
{
    Solution pro;
    string str = "ZY";
    cout << "convertToTitle ? " << pro.hammingWeight( 00111001011110000010100101000000 ) << endl;
    
    return 0;
}