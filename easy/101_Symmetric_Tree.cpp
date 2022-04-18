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
    bool isSymmetric(TreeNode* root) {
        if( !root )
            return false;
        return isSame( root->left, root->right );
    }
    
    bool isSame(TreeNode* a, TreeNode* b) {
        if( a == NULL && b == NULL ) return true;
        if( a == NULL || b == NULL ) return false;
        if( a->val != b->val ) return false;
        return isSame( a->left, b->right ) && isSame( a->right , b->left );
    }
};

int main()
{
    int i;
    Solution ss;
    vector<int> returnRec;
    TreeNode root;
    TreeNode node1[3];
    TreeNode node2[3];

    root = TreeNode( 1, &node1[0], &node2[0] );

    node1[0] = TreeNode( 2, &node1[1], &node1[2] );
    node1[1] = TreeNode( 3 );
    node1[2] = TreeNode( 4 );

    node2[0] = TreeNode( 2, &node2[2], &node2[1] );
    node2[1] = TreeNode( 3 );
    node2[2] = TreeNode( 4 );

    cout << "isSameTree ? " << ss.isSymmetric( &root ) << endl;
    
    return 0;
}