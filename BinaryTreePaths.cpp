/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
      
      void leaf(Node* root,vector<int>&leafArray){
             if(root==NULL)return;
              if(root->left==NULL && root->right==NULL)leafArray.push_back(root->data);
              
             leaf(root->left,leafArray);
             leaf(root->right,leafArray);
      }
      
       bool f(Node* root,vector<int>& ans,int target){
             
             if(root==NULL)return false;
             
             ans.push_back(root->data);
             
             if(root->data==target)return true;
             
             if(f(root->left,ans,target) || f(root->right,ans,target))return true;
             
             ans.pop_back();
             
             return false;
       }
     
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> a;
        if(root==NULL)return a;
        
        vector<int> leafArray;
        leaf(root,leafArray);
        
        for(int i=0;i<leafArray.size();i++){
             vector<int> ans;
             f(root,ans,leafArray[i]);
             a.push_back(ans);
        }
        
        
        return a;
        
        
    }
};