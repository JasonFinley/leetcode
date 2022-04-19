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

class MyQueue {
public:

    stack <int> st1, st2;
    MyQueue() {
        
    }

    void push(int x) {
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }

    int pop() {
        int pop = st1.top();
        st1.pop();
        return pop;
    }

    int peek() {
        int peek = st1.top();
        return peek;
    }

    bool empty() {
        return st1.empty();
    }
};

int main()
{
//    Solution ss;
//    vector<string> str;
//    vector<int> nums = {0,1,2,4,5,7};
//    cout << "convertToTitle ? " << ss.isPowerOfTwo(55) << endl;
    
    return 0;
}