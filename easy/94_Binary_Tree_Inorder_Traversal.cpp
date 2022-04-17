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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s_Tree;
        vector<int> ans;
        TreeNode* p = root;
        if( root == NULL )
            return ans;
        
        while( p || !s_Tree.empty() )
        {
            if( p ){
                s_Tree.push(p);
                p = p->left;
            }else{
                p = s_Tree.top();
                s_Tree.pop();
                ans.push_back( p->val );
                p = p->right;
            }
        }

        return ans;
    }
};

int main()
{
    int i;
    Solution ss;
    vector<int> returnRec;
    TreeNode root[4];

    root[0] = TreeNode(1);
//    root[1] = NULL;
    root[2] = TreeNode(2);
    root[3] = TreeNode(3);
    root[0].right = &(root[2]);
    root[2].left = &(root[3]);

    returnRec = ss.inorderTraversal( root );
    for( i = 0 ; i < returnRec.size() ; i++ )
    {
        cout << "inorderTraversal ? " << returnRec[i] << endl;
    }
    
    return 0;
}