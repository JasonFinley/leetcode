#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int tmp = 0;
        for( int i = 31 ; i >= 0 ; i-- )
        {
            tmp = n >> i;
            ans |= (tmp & 1) << (31 - i);
        }
        return ans;
    }
};

int main()
{
    Solution pro;
    string str = "ZY";
    cout << "convertToTitle ? " << pro.reverseBits( 00111001011110000010100101000000 ) << endl;
    
    return 0;
}