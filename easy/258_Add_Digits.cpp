#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if(num <= 9 )
            return num;
        int ans = 0;
        while( num )
        {
            ans += num%10;
            num /= 10;
        }
        
      if( ans >= 10 )
           return addDigits( ans );        
        return ans;
    }
};

int main()
{
    Solution ss;
    string s1 = "anagram";
    string s2 = "nagaram";

    cout << "convertToTitle ? " << ss.addDigits( 123 ) << endl;
    
    return 0;
}