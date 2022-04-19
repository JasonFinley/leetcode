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
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* s = new ListNode( -1, head );
        ListNode* p = s;
        while( p && p->next != NULL )
        {
            if( p->next->val == val )
                p->next = p->next->next;
            else
                p = p->next;
        }
        return s->next;
    }
};

int main()
{
    Solution ss;
//    vector<int> nums = {4,1,2,1,2};
    
//    cout << "singleNumber ? " << ss.hasCycle( nums ) << endl;
    
    return 0;
}