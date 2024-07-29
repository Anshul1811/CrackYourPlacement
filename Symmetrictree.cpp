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
    bool f(TreeNode* p,TreeNode* q){
           if(p==NULL || q==NULL){
                return (p==q);
           }

           return (p->val==q->val)&&f(p->left,q->right)&&f(p->right,q->left);
    }
    
    bool isSymmetric(TreeNode* root) {
          if(root==NULL)return true;

          if((root->left && !root->right)||(!root->left && root->right))return false;

          return f(root->left,root->right);
    }
};