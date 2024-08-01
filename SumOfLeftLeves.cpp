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
     void inorder(TreeNode* root,int &res){
          if(root==NULL)return;

          inorder(root->left,res);

          if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL ){
               res+=root->left->val;
          }

          inorder(root->right,res);
     }
    int sumOfLeftLeaves(TreeNode* root) {
        int res = 0;
        inorder(root, res);

        return res; 
    }
};