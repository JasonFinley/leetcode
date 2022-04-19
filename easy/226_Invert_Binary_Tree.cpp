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
    TreeNode* _invertTree(TreeNode* root) {
        TreeNode* p_l;
        TreeNode* p_r;
        if( root == NULL )
            return NULL;

        p_l = root->left;
        p_r = root->right;
        _invertTree( p_l );
        _invertTree( p_r );
        root->left = p_r;
        root->right = p_l;
        return root;
    }

    TreeNode* invertTree(TreeNode* root) {
        TreeNode* p_l;
        TreeNode* p_r;
        if( root == NULL )
            return NULL;

        p_l = root->left;
        p_r = root->right;
        invertTree( p_l );
        invertTree( p_r );
        root->left = p_r;
        root->right = p_l;
        return root;
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

    cout << "isSameTree ? " << ss.invertTree( node1 ) << endl;
    
    return 0;
}