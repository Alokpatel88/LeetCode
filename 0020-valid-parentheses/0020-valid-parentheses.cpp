class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
     
        for(auto it: s){
            if(it=='(' || it=='{' || it=='['){
                st.push(it);
            }
           else{
               if(!st.empty()){
             
               char chk=st.top();
               if((it==')'&& chk=='(') || (it=='}' && chk=='{') || (it==']'&&chk=='[')){
                   st.pop();
               }
                  else{
                      return false;
                  }
            }
            else return false;
           }
        }
        if(st.empty())
       return true;
        return false;
    }
};