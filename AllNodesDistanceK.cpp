/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void mapParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parent){
            queue<TreeNode*> q;
            q.push(root);

            while(!q.empty()){
                 TreeNode* node=q.front();
                 q.pop();

                 if(node->left){
                      parent[node->left]=node;
                      q.push(node->left);
                 }

                 if(node->right){
                      parent[node->right]=node;
                      q.push(node->right);
                 }
            }
    }


    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
          unordered_map<TreeNode*,TreeNode*> parent; // node->parent track
          mapParent(root,parent);
          queue<TreeNode*> q;
          q.push(target);
          unordered_map<TreeNode*,bool> vis;
          vis[target]=true;
           int cnt=0;

          while(!q.empty()){
               int s=q.size();
               if(cnt==k)break;
               cnt++;

               for(int i=0;i<s;i++){
                   TreeNode* node=q.front();
                   q.pop();

                   if(node->left && !vis[node->left]){
                         q.push(node->left);
                         vis[node->left]=true;
                   }

                   if(node->right && !vis[node->right]){
                        q.push(node->right);
                        vis[node->right]=true;
                   }

                   if(parent[node] && !vis[parent[node]]){
                      q.push(parent[node]);
                      vis[parent[node]]=true;
                   }
               }
          }

          vector<int> ans;
          while(!q.empty()){
              TreeNode* node=q.front();
              q.pop();
              ans.push_back(node->val);
          }
          return ans;
           

    }
};