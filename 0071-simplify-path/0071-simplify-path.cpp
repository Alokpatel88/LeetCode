class Solution {
public:
    string simplifyPath(string s) {
        int n = s.length();
        int i = 0;
        stack<string> st;
   
        while(i < n){
            if(s[i] == '/'){
                i++; 
                continue;
            }
            string temp;
            while(i < n && s[i] != '/'){
                temp = temp + s[i];
                i++;
            }
            
            if(temp == "."){ 
                continue;
            }
            else if(temp == ".."){ 
                if(!st.empty()){
                st.pop();
                }
            }
            else{
				st.push(temp);
                }
        }
        string res;
        while(!st.empty()){
            res = "/" + st.top() + res;
            st.pop();
        }
        
        if(res.length() == 0){
            return "/";
        }
        return res;
    }
};