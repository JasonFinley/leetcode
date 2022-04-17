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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;
        
        while( head && head->next )
        {
            if( head->val == head->next->val ){
                head->next = head->next->next;
            }else{
                head = head->next;
            }
        }

        return tmp;
    }
};

int main()
{
    Solution ss;
    ListNode listnode_1[3];
    ListNode listnode_2[3];
    ListNode* returnNode;

    int a1[] = {1,1,2,3,3,4};
    int a2[] = {1,3,4};

    listnode_1[0] = ListNode( 1 );
    listnode_1[1] = ListNode( 1 );
    listnode_1[2] = ListNode( 2 );
    listnode_1[3] = ListNode( 3 );
    listnode_1[4] = ListNode( 3 );
    listnode_1[5] = ListNode( 4 );
    listnode_1[0].next = &listnode_1[1];
    listnode_1[1].next = &listnode_1[2];
    listnode_1[2].next = &listnode_1[3];
    listnode_1[3].next = &listnode_1[4];
    listnode_1[4].next = &listnode_1[5];

    returnNode = ss.deleteDuplicates( listnode_1 );

    while (returnNode)
    {
        cout << "returnNode ? " << returnNode->val << endl;
        returnNode = returnNode->next;
    }
    
    return 0;
}