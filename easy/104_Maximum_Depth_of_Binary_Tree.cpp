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
    int maxDepth(TreeNode* root) {
        if( root == NULL )
            return 0;
        return max( maxDepth( root->left ), maxDepth( root->right ) ) + 1;
    }
};

int main()
{
    int i;
    Solution ss;
    vector<int> returnRec;
    TreeNode root;
    TreeNode node1;
    TreeNode node2[3];

    root = TreeNode( 3, &node1, &node2[0] );

    node1 = TreeNode( 9 );

    node2[0] = TreeNode( 20, &node2[1], &node2[2] );
    node2[1] = TreeNode( 20 );
    node2[2] = TreeNode( 7 );

    cout << "maxDepth ? " << ss.maxDepth( &root ) << endl;
    
    return 0;
}