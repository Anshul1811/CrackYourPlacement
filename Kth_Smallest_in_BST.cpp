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
     
     void inorder(TreeNode* root,int &ans,int k,int &ani){
            if(root==NULL)return;

            inorder(root->left,ans,k,ani);
            ans++;
            if(ans==k){ani=root->val;return;}
            inorder(root->right,ans,k,ani);
     }
     
    int kthSmallest(TreeNode* root, int k) {
           int ans=0;int ani=0;
           inorder(root,ans,k,ani);
           return ani;
    }
};