#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {

        if( head == NULL )
            return false;

        stack<int> myS;
        ListNode* p;
        p = head;
        while( p )
        {
            myS.push( p->val );
            p = p->next;
        }

        p = head;
        while( p )
        {
            if( myS.top() != p->val ) return false;

            myS.pop();
            p = p->next;
        }
        return true;
    }
};

int main()
{
    Solution ss;
//    vector<int> nums = {4,1,2,1,2};
    
//    cout << "singleNumber ? " << ss.hasCycle( nums ) << endl;
    
    return 0;
}