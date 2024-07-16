class Solution {
public:
    string convertToTitle(int n) {

          string ans="";

          while(n--){
              int d=(n%26)+65;
              n=n/26;
              ans=char(d)+ans;
          }
          return ans;
        
    }
};