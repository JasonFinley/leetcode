#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class MinStack {
private:
    stack<int> _my_stack;
    stack<int> _min_val;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if( _min_val.empty() || val <= _min_val.top() )
            _min_val.push(val);
        _my_stack.push(val);
    }
    
    void pop() {
        if( _my_stack.top() == _min_val.top() )
            _min_val.pop();
        _my_stack.pop();
    }
    
    int top() {
        return _my_stack.top();
    }
    
    int getMin() {
        return _min_val.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main()
{
    int i;
    MinStack ss;

//    cout << "isSameTree ? " << ss.preorderTraversal(  ) << endl;
    
    return 0;
}