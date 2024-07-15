class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int cnt0=0;
        // int n=nums.size();
          for(int i=0;i<nums.size();i++){
               if(nums[i]==0){
                cnt0++;
                    vector<int>::iterator it;
                    it = nums.begin();
                    it+=i;
                    nums.erase(it);
                    i--;
               }
         }

         while(cnt0){
            nums.push_back(0);
            cnt0--;
         }
    }
};