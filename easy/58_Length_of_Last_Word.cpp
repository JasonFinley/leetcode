#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int start, end;
        start = 0;
        end = s.size() - 1;
        while( s[end] == ' ')
        {
            end -= 1;
        }
        start = end;
        while( start >= 0 && s[start] != ' ' )
        {
            start -= 1;
        }
        return end - start;   
    }
};

int main()
{
    Solution ss;
    string haystack = "hello world";
    int idx = ss.lengthOfLastWord( haystack );
    cout << "maxSub ? " << ss.lengthOfLastWord( haystack ) << endl;
    
    return 0;
}