class Solution {
public:

   bool chk_chr(char ch){
       if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' ){
           return true;
       }
       return false;
   }
    string reverseVowels(string s) {
        int i =0, j = s.size() -1 ;
        while(i < j){
            bool v1 = chk_chr(s[i]);
            bool v2 = chk_chr(s[j]);
            if(v1 == true && v2 == true){
                swap(s[i], s[j]);
                i++; j--;
            }
            if(v1 == false)
            i++; 
            if(v2 == false)
            j--;
        }
        return s;
    }
};