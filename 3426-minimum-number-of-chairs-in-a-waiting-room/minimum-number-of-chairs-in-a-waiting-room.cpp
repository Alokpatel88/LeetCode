class Solution {
public:
    int minimumChairs(string s) {
        int currReq = 0;
        int ans = 0;
        for(int i = 0; i< s.size(); i++){
            if(s[i] == 'E'){
                currReq++;
                ans = max(ans, currReq);
            }
            else{
                currReq--;
            }
        }
        return ans;
    }
};