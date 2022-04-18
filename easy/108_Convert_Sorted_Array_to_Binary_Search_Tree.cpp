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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* node;
        int mid, l, r;
        int n = nums.size();
        if( n == 0 ) return nullptr;
        if( n == 1 ) return new TreeNode( nums[0] );
        l = 0;
        r = n - 1;
        mid = l + ( r - l )/2;
        
        vector<int> numl( nums.begin(), nums.begin() + mid );
        vector<int> numr( nums.begin() + mid + 1, nums.end() );

        node = new TreeNode( nums[mid] );
        node->left = sortedArrayToBST( numl );
        node->right = sortedArrayToBST( numr );
        return node;
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