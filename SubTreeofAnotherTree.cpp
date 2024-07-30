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
     bool ans=0;
    bool isSame(TreeNode* p,TreeNode* q){
           if(!p && !q)return true;

           if(!p||!q)return 0;

           return (p->val==q->val && isSame(p->left,q->left) && isSame(p->right,q->right));
    }

    void f(TreeNode* p,TreeNode* q){
          if(!p)return;

          if(p->val==q->val && isSame(p,q))ans=true;

           //traverse
           f(p->left,q);
           f(p->right,q);        
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        f(root,subRoot);
        return ans;
    }
};