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
    void deleteNode(ListNode* node) {
        *node = *(node->next);
    }
};

int main()
{
    Solution ss;
//    vector<int> nums = {4,1,2,1,2};
    
//    cout << "singleNumber ? " << ss.hasCycle( nums ) << endl;
    
    return 0;
}