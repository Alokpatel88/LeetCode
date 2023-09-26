class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool>visited(26,false);
        stack<char> st;
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            m[s[i]]--;
            if(visited[s[i]-'a']==false){
                while(!st.empty() && st.top()>s[i] && m[st.top()]>0){
                    visited[st.top()-'a']=false;
                    st.pop();
                }
                st.push(s[i]);
                visited[s[i]-'a']=true;
            }
            
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};