#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int ai, bi, sum, ad;
        string s = "";
        ai = a.length() - 1;
        bi = b.length() - 1;
        sum = 0;
        ad = 0;
        while( ai >= 0 || bi >= 0 || ad == 1)
        {
            sum = 0;
            if( ai >= 0 ){
                sum += a[ai] - '0';
                ai -= 1; 
            }
            if (bi >= 0 ){
                sum += b[bi] - '0';
                bi -= 1;
            }
            sum += ad;
            ad = sum / 2;
            sum %= 2;
            s = (char)( sum + '0' ) + s;
        }
        return s;
    }
};

int main()
{
    Solution ss;
    string a = "11";
    string b = "1";
    cout << "plusOne ? " << ss.addBinary( a, b ) << endl;
    
    return 0;
}