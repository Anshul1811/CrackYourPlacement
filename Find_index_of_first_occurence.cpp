class Solution {
public:
    int strStr(string s, string needle) {

        if(needle.size()>s.size())return -1;
          
          for(int i=0;i<s.size();i++){
               if(s[i]==needle[0]){
                int j=i;int k=0;int flag=0;
                    while(k<needle.size() && i<s.size()){
                        if(s[j++]!=needle[k++]){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0)return i;
               }
          }
          return -1;
    }
};