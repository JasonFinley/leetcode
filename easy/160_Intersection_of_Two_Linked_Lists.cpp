#include <iostream>
#include <vector>
#include <string>
#include <stack>

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if( headA == NULL || headB == NULL ) return NULL;
        ListNode* a = headA;
        ListNode* b = headB;
        while( a != b )
        {
            if( a == NULL )
                a = headB;
            else
                a = a->next;
            
            if( b == NULL )
                b = headA;
            else
                b = b->next;
        }

        return a;
    }
};

int main()
{
    Solution ss;
    ListNode listnode_1[3];
    ListNode listnode_2[3];
    ListNode* returnNode;


    returnNode = ss.getIntersectionNode( listnode_1, listnode_2 );

    while (returnNode)
    {
        cout << "returnNode ? " << returnNode->val << endl;
        returnNode = returnNode->next;
    }
    
    return 0;
}