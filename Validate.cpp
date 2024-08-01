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
    
    bool helper(TreeNode* root,long long leftRange,long long rightRange){
              if(root==NULL)return true;

              if(root->val>=rightRange || root->val<=leftRange)return false;
              return helper(root->left,leftRange,root->val)&& helper(root->right,root->val,rightRange);
    }
     
    bool isValidBST(TreeNode* root) {
          return helper(root,LLONG_MIN,LLONG_MAX);
    }
};

