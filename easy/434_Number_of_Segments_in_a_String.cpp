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
    int countSegments(string s) {
        stringstream ss(s);
        int res = 0;
        while (ss >> s) res++;
        return res;
        /*int cnt = 0;
        for( int i = 0 ; i < s.length() ; i++ )
        {
            if(s[i] == ' ')
            continue;
        
            if(s[i+1] == ' ' || s[i+1] == '\0')
                cnt++;
        }
        return cnt;*/
    }
};

int main()
{
    Solution ss;
    string num1 = "123456789";
    string num2 = "987654321";
//    string num1 = "11";
//    string num2 = "123";

    cout << "thirdMax ? " << ss.countSegments( num2 ) << endl;
    
    return 0;
}