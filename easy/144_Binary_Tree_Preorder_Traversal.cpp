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
    void _preorderTraversal(TreeNode* root, vector<int>& ret ){
        if( root == NULL )
            return;
        ret.push_back( root->val );
        _preorderTraversal( root->left, ret );
        _preorderTraversal( root->right, ret );        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        _preorderTraversal( root, ans );
        return ans;
    }
};

int main()
{
    int i;
    Solution ss;
    vector<int> returnRec;
    TreeNode root;

    returnRec = ss.preorderTraversal( &root );
//    cout << "isSameTree ? " << ss.preorderTraversal(  ) << endl;
    
    return 0;
}