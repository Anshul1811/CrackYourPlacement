/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

using ll=long long;

class Solution {
public:
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

    int getDecimalValue(ListNode* head) {
        // string s="";
        vector<int> v;
       while(head){
          v.push_back(head->val);
          head=head->next;
       }

       string s="";
       for(int i=0;i<v.size();i++){
           s+=to_string(v[i]);
       }
        // cout<<s<<endl;
        return binaryToDecimal(s);
        
    }
};