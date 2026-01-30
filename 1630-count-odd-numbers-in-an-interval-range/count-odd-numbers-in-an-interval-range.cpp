class Solution {
public:
    int countOdds(int low, int high) {
        // int cnt = 0;
        // for(int i = low; i<= high; i++){
        //     if(i % 2 != 0){
        //         cnt++;
        //     } 
        // }
         // optmize without Loop
            bool checkStart = low % 2 != 0;
            bool checkEnd = high % 2 != 0;
            int cnt = 0;
            if(checkStart){
                cnt += 1;
                low += 1;
            }
             if(checkEnd){
                cnt += 1;
                high -= 1;
            }
            int beetWeenNo = (high - low) / 2; 
            cnt += beetWeenNo;
            return cnt;

        }
};