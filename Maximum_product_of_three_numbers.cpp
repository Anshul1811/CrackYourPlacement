class Solution {
public:
    int maximumProduct(vector<int>& nums) {
           
           sort(nums.begin(),nums.end());
          int n=nums.size();
          int ans1=1;
          ans1*=nums[n-1]*nums[n-2]*nums[n-3];

        //   if(ans1==0)return 0;
          
          int ans2=1;
          int flag=0;
          if(nums[0]<0 && nums[1]<0){
              ans2*=nums[0]*nums[1]*nums[n-1];
              flag=1;
          }

          if(ans1==0 && ans2==1 && flag==0)return 0;

          return max(ans1,ans2);
    }
};