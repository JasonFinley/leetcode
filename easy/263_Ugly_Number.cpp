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
    bool isUgly(int n) {
        if(n <= 0) return false;
        while(n > 1)
        {
            if(n%2 == 0) n /= 2;
            else if(n%3 == 0) n /= 3;
            else if(n%5 == 0) n /= 5;
            else return false;
        }
        return true;
    }
};

int main()
{
    Solution ss;
    string s1 = "anagram";
    string s2 = "nagaram";

    cout << "convertToTitle ? " << ss.isUgly( 123 ) << endl;
    
    return 0;
}