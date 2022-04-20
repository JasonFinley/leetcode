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
    vector<string> _ans;
public:
    void getPath( TreeNode* root, string s ){

        if (root->left == NULL && root->right == NULL ){
            s += to_string(root->val);
            _ans.push_back(s);
            return;
        }
        if( root->left )
            getPath( root->left, s + to_string(root->val) + "->" );
        if( root->right )
            getPath( root->right, s + to_string(root->val) + "->" );
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if( root == NULL )
            return _ans;
        getPath( root, "" );
        return _ans;
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

//    cout << "isSameTree ? " << ss.binaryTreePaths( node1 ) << endl;
    
    return 0;
}