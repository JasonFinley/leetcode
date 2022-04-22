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
    bool repeatedSubstringPattern(string s) {
        string ss = s + s;
        string sub = ss.substr( 1, 2 * ( s.size() -1 ) );
        int idx = sub.find(s);
        cout << " repeatedSubstringPattern ? " << ss << " " << sub << " " << idx << endl;
        return (s+s).substr(1, 2*(s.size()-1)).find(s) != -1;
    }
};

int main()
{
	string s = "asdfghasdfghasdfgh"; 
	Solution sol;

	int ans = sol.repeatedSubstringPattern( s);
	
    cout << ans << endl;

    return 0;
}