// Last updated: 8/2/2025, 5:12:53 PM
class Solution {
public:
    bool isValid(string x) {
         stack<char> st;
        
        for(char c: x){
            if(c == '(' || c == '{' || c ==  '['){
                st.push(c);
            }else{
                
                if(st.empty()) return 0;
                
                char val = st.top();
                st.pop();
                
                if(c == ']' && val != '['){
                    return 0;
                }
                if(c == '}' && val != '{'){
                    return 0;
                }
                if(c == ')' && val != '('){
                    return 0;
                }
            }
        }
        
        if(st.size() == 0) return 1;
        else return 0;
    }
};