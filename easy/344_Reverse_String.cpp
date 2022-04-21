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
    void reverseString(vector<char>& s) {
        int j = s.size() - 1;
        int i = 0;
        while( i < j )
        {
            swap( s[i], s[j] );
            i++;
            j--;
        }
    }
};

int main()
{
    Solution ss;
    vector<char> s;
//    string s = "dog cat dog";
    ss.reverseString( s );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}