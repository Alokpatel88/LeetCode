class Solution {
public:
    int appendCharacters(string s, string t) {
        int j = 0;
        int size = t.size();
        for(int i = 0; i< s.size(); i++){
            if(s[i] == t[j] && j < size){
                j++;
                
            }
        }

        return size - j;
        
    }
};