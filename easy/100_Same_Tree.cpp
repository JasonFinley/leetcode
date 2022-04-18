#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( p == NULL && q == NULL ) return true;
        if( p == NULL && q != NULL ) return false;
        if( p != NULL && q == NULL ) return false;
        if( p->val == q->val ){
            return isSameTree( p->left, q->left ) && isSameTree( p->right, q->right );
        }else{
            return false;
        }
    }
};

int main()
{
    int i;
    Solution ss;
    vector<int> returnRec;
    TreeNode node1[3];
    TreeNode node2[3];

    node1[0] = TreeNode( 1, &node1[1], &node1[2] );
    node1[1] = TreeNode( 2 );
    node1[2] = TreeNode( 3 );

    node2[0] = TreeNode( 1, &node2[1], &node2[2] );
    node2[1] = TreeNode( 2 );
    node2[2] = TreeNode( 3 );

    cout << "isSameTree ? " << ss.isSameTree( node1, node2 ) << endl;
    
    return 0;
}