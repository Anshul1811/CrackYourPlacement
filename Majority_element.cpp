class Solution {
public:
    int majorityElement(vector<int>& nums) {
          
          int n=nums.size();
          map<int,int> mpp;
          
          for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
          }
            
          for(auto i:mpp){
              if(i.second>n/2)return i.first;
          }

          return  -1;
    }
};