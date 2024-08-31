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

//     int sum = 0 ;
//     int rangeSumBST(TreeNode* root, int low, int high) {

//         if(root == NULL)
//         {
//             return 0;
//         }

//         if(root->val >= low && root->val <= high)
//         {
//             sum = sum + root->val;
//         }
        
//         if(root->val > low)
//         {
//             rangeSumBST( root->left , low , high);
//         }
//         if(root->val < high)
//         {
//             rangeSumBST( root->right , low , high);
//         }

//         return sum ;
//     }
// };

// problem link : https://leetcode.com/problems/range-sum-of-bst/


/*
consept :  amader akta bst daua ase jar akta low value and akta high value daua ase ,, amader oi low valu and high value ar modde jai node golo ase tader value return korte hobe .. 

note : return korte hohe ( root->val >= low && root->val <= high ) aitar sum .. low teke boro ar high teke soto value er jog golo return korte hobe .. 

recursion kamne cholbe ?

bst te ta left node obossoi choto hobe parent teke ar right node obossoi boro hode parent node teke .. 

tai amra condition dibo jodi root-> val > low teke tahole left a traversl korte hobe .. 
ar jodi root-> val < high er teke choto hoi tahole right a traversal korte hobe .. 

*/