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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dmmy = new ListNode(-1);
        ListNode* header;
        header = dmmy;
        while ( list1 && list2 )
        {
            if( list1->val <= list2->val ){
                dmmy->next = list1;
                dmmy=list1;
                list1 = list1->next;
            }else{
                dmmy->next = list2;
                dmmy=list2;
                list2 = list2->next;
            }
        }
        if( list1 ){
            dmmy->next = list1;
        }
        if( list2 ){
            dmmy->next = list2;
        }
        return header->next;
    }
};

int main()
{
    Solution ss;
    ListNode listnode_1[3];
    ListNode listnode_2[3];
    ListNode* returnNode;

    int a1[] = {1,2,4};
    int a2[] = {1,3,4};

    listnode_1[0] = ListNode( 1 );
    listnode_1[1] = ListNode( 2 );
    listnode_1[2] = ListNode( 4 );
    listnode_1[0].next = &listnode_1[1];
    listnode_1[1].next = &listnode_1[2];

    listnode_2[0] = ListNode( 1 );
    listnode_2[1] = ListNode( 3 );
    listnode_2[2] = ListNode( 4 );
    listnode_2[0].next = &listnode_2[1];
    listnode_2[1].next = &listnode_2[2];

    returnNode = ss.mergeTwoLists( listnode_1, listnode_2 );

    while (returnNode)
    {
        cout << "returnNode ? " << returnNode->val << endl;
        returnNode = returnNode->next;
    }
    
    return 0;
}