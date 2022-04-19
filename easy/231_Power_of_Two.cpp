#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0 )
            return false;
        if (n==1)
            return true; 
        
        while(n>1)
        {
            if(n%2 != 0)
                return false;
            n = n/2;
        }
        
        return true; 
    }
};

int main()
{
    Solution ss;
    vector<string> str;
    vector<int> nums = {0,1,2,4,5,7};

    cout << "convertToTitle ? " << ss.isPowerOfTwo(55) << endl;
    
    return 0;
}