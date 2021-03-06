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
    TreeNode* createTree( vector<int>& nums, int l, int r )
    {
        TreeNode* node;
        int mid;

        if( l > r )
            return nullptr;

        mid = l + (r - l)/2;
        node = new TreeNode( nums[mid] );
        node->left = createTree( nums, l, mid - 1 );
        node->right = createTree( nums, mid + 1, r );
        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree( nums, 0, nums.size() - 1 );
    }
};

int main()
{
    int i;
    Solution ss;
    vector<int> returnRec = {-10,-3,0,5,9};
    TreeNode* root;
    TreeNode* p;

    root = ss.sortedArrayToBST( returnRec );
    
    return 0;
}