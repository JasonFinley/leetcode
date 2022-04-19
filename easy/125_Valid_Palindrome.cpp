#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l, r;
        l = 0;
        r = s.length() - 1;
        while( l < r )
        {
            if( !isalnum( s[l] ) ){
                l += 1;
            }else if( !isalnum( s[r] ) ){
                r -= 1;
            }else if( tolower( s[l] ) == tolower( s[r] ) ){
                l += 1;
                r -= 1;
            }else
                return false;
        }

        return true;
    }
};

int main()
{
    Solution ss;
    string str = "A man, a plan, a canal: Panama";
    
    cout << "isPalindrome ? " << ss.isPalindrome( str ) << endl;
    
    return 0;
}