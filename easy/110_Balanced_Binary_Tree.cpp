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
    int getDepth( TreeNode* p )
    {
        int l, r;
        if( p == NULL ) return 0;
        l = getDepth( p->left );
        if( l == -1 )
            return -1;
        r = getDepth( p->right );
        if( r == -1 )
            return -1;
        if( abs(l - r) > 1 )
            return -1;
        return max( l, r ) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return (getDepth( root ) != -1);
    }
};
int main()
{
    Solution ss;
    TreeNode root;
    TreeNode node1[2];
    TreeNode node2[2];

    root = TreeNode( 3, &node1[0], &node1[1] );
    node1[0] = TreeNode( 9 );
    node1[1] = TreeNode( 20, &node2[0], &node2[1] );

    node2[0] = TreeNode( 15 );
    node2[1] = TreeNode( 7 );

    cout << "isBalanced ? " << ss.isBalanced( &root ) << endl;
    
    return 0;
}