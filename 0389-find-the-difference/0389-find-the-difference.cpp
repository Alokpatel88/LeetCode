class Solution {
public:
    char findTheDifference(string s, string t) {
        char dig = '\0';
        for(int i = 0; i< s.size(); i++){
            dig = dig^s[i]; 
        }
        for(int i = 0; i< t.size(); i++){
            dig = dig^t[i]; 
        }
        return dig;
    }
};