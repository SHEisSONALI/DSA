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
class Solution {
public:
    TreeNode* searchIntoBST(TreeNode* root, int val) {
        if(root==nullptr || root->val == val){
            return root;
        }
        
        if(val < root->val) {
            return searchIntoBST(root->left, val);
        }
        else{
            return searchIntoBST(root->right, val);
        }
        return root;
    }
};