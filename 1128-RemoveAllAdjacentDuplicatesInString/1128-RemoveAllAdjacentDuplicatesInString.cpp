// Last updated: 8/2/2025, 5:11:05 PM
class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        string str="";
        stack <char> s1;
        for(int i=0;i<n;i++){
             if(s1.empty()){
            s1.push(s[i]);
             }
            else{
            if(s[i]==s1.top()){
                s1.pop();
                
            }
            else
                s1.push(s[i]);
        }
        }
         while(!s1.empty())
       {
           str+=s1.top();
           s1.pop();
       }
       reverse(str.begin(),str.end());
       return str;
    }
};