class Solution {
public:
    int partitionString(string s) {
        int res=1;
        unordered_map<char,int> temp;
        for(int i=0; i<s.length(); i++){
           if(temp.find(s[i]) !=temp.end()){
               if(temp[s[i]]>0) res++;
               temp.clear();   
           }
           temp[s[i]]++;
        }
        return res;
    }
};