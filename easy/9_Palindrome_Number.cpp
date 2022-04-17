#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        
        long n = 0;
        long t = x;
        while (x)
        {
            n = n * 10 + (x % 10);
            x /= 10;
        }
        
        return n == t; 
    }
};

int main()
{
    Solution ss;
  cout << ss.isPalindrome(1234321) << endl;
  return 0;
}