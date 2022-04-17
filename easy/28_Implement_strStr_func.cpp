#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        if( needle == "" )
            return 0;

        if( needle.length() > haystack.length() )
            return -1;

        return haystack.find( needle );
    }
};

int main()
{
    Solution ss;
    string haystack = "hello";
    string needle = "ll";

    cout << "strstr ? " << ss.strStr( haystack, needle ) << endl;
    
    return 0;
}