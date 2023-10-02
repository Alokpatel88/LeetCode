class Solution {
public:
    bool winnerOfGame(string s) {
     int x =0; int y =0;
     for(int i = 1; i < s.size()-1 ; i++ ){
         if(s[i] == s[i-1] && s[i] == s[i+1]){
           if(s[i] == 'A')  x++;
         else
             y++;
        }
     }
     return x > y; 
    }
};