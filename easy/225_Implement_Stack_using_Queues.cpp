#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <math.h>

using namespace std;

class MyStack {
    queue<int> _myQ;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        _myQ.push(x);
        for( int i = 0 ; i < _myQ.size() - 1 ; i++ )
        {
            _myQ.push(_myQ.front());
            _myQ.pop();
        }
    }
    
    int pop() {
        int val = top();
        _myQ.pop();
        return val;
    }
    
    int top() {
        return _myQ.front();
    }
    
    bool empty() {
        return _myQ.empty();
    }
};

int main()
{
//    Solution pro;
//    vector<int> nums = {1,1,1,3,3,4,3,2,4,2} ;
//    cout << "containsDuplicate ? " << pro.containsNearbyDuplicate( nums, 3 ) << endl;
    
    return 0;
}