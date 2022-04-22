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
        string addStrings(string num1, string num2) {
        int n1 = num1.length();
        int n2 = num2.length();
        int n = 0, i = 0, j = 0;
        int carry = 0;
        n = n1 > n2 ? n1 : n2;
        string ans = "";
        while( i < n )
        {
            int tmp1, tmp2, val;
            tmp1 = tmp2 = val = 0;
            if( i < n1 )
                tmp1 = num1[ n1 - i  - 1 ] - '0';
            if( i < n2 )
                tmp2 = num2[ n2 - i  - 1 ] - '0';
            val = tmp1 + tmp2 + carry;
            ans =  (char)( val%10 + '0' ) + ans;
            carry = val / 10;
            i++;

        }
        if(carry>0)
            ans = (char)( carry + '0' ) + ans;
        return ans;
    }
};

int main()
{
    Solution ss;
    string num1 = "123456789";
    string num2 = "987654321";
//    string num1 = "11";
//    string num2 = "123";

    cout << "thirdMax ? " << ss.addStrings( num1, num2 ) << endl;
    
    return 0;
}