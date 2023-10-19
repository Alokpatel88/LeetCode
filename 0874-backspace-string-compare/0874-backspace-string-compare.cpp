class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        for(int i = 0 ;i < s.size(); i++){
            if(!st1.empty() && s[i] == '#'){
                st1.pop();
            }
             else if (s[i] != '#'){
                st1.push(s[i]);
            }
        }
        for(int i = 0 ; i < t.size(); i++){
            if(!st2.empty() && t[i] == '#'){
                st2.pop();
            }
            else if (t[i] != '#'){
                st2.push(t[i]);
            }
        }
        string s1="", s2 = "";
        while(!st1.empty()){
           auto it = st1.top(); 
            s1 += it;
            st1.pop();
        }
        while(!st2.empty()){
           auto it = st2.top(); 
            s2 += it;
            st2.pop();
        }
        return s1 == s2;
    }
};