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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum;
        if( root == NULL ) return false;
        
        sum = targetSum - root->val;
        if( sum == 0 && root->left == NULL && root->right == NULL )
            return true;
        
        return hasPathSum( root->left, sum ) || hasPathSum( root->right, sum );
    }
    
};

int main()
{
/*
[5,4,8,11,null,13,4,7,2,null,null,null,1]
22
*/
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

    cout << "maxDepth ? " << ss.hasPathSum( &root, 22 ) << endl;
    
    return 0;
}