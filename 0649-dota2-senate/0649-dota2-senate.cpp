class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int>q1,q2;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                q1.push(i);
            }
            else{
                q2.push(i);
            }
        }
        while(!q1.empty() && !q2.empty()){
            int m1=q1.front();
            int m2=q2.front();
            q1.pop();
            q2.pop();
            if(m1>m2){
                q2.push(m2+n);
            }
            else{
                q1.push(m1+n);
            }
        }
        int size1=q1.size();
        int size2=q2.size();
        return size1 > size2 ? "Radiant" : "Dire";
    }              
};