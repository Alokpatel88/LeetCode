class Solution {
public:
    int bestClosingTime(string customers) {
        int max = 0, score = 0, ans = -1;
        for(int i = 0; i < customers.size(); ++i) {
            score += (customers[i] == 'Y') ? 1 : -1;
            if(score > max) {
                max = score;
                ans = i;
            }
        }
        return ans + 1;
    }
};