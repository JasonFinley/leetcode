#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <unordered_set>
#include <math.h>

using namespace std;

class Solution {
    unordered_set<int> _mySet;
public:
    int getNewNum( int ori )
    {
        int sum = 0;
        while( ori )
        {
            int tmp = ori % 10;
            sum += pow( tmp, 2 );
            ori /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {

        while( n != 1 )
        {
            n = getNewNum( n );
            if( _mySet.count( n ) )
                return false;
            _mySet.insert( n );
        }

        return true;
    }
};

int main()
{
    Solution pro;
    string str = "ZY";
    cout << "isHappy ? " << pro.isHappy( 19 ) << endl;
    
    return 0;
}