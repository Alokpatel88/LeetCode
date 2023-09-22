class Solution {
public:
    bool isSubsequence(string s, string t) {
     stack<int> st;
     for(int i = s.size()-1; i>=0; i--){
         st.push(s[i]);
     }   
     for(int i = 0; i<t.size(); i++){
         if(st.empty()) return true;
         if( !st.empty() && t[i] == st.top()){
             st.pop();
         }
     }
     return st.empty() ? 1 : 0;
    }
};