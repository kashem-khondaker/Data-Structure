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





// class Solution {
// public:
    
//     TreeNode* convert(vector<int>& v, int l, int r) {
//         if (l > r) {
//             return NULL; // Base case: empty subtree
//         }

//         int mid = (l + r) / 2;
//         TreeNode* root = new TreeNode(v[mid]);

//         root->left = convert(v, l, mid - 1); // Recurse on left half
//         root->right = convert(v, mid + 1, r); // Recurse on right half

//         return root;
//     }

//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         int l = 0;
//         int r = nums.size() - 1;

//         return convert(nums, l, r);
//     }
// };




/*
problem link : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

*/