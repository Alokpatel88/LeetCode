class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int total = 0;
        int maxi = 0;
        int addup = 0;
        
        for (int i = 0; i < customers.size(); ++i) {
            if (grumpy[i] == 0) {
                total += customers[i];
            }
        }
        for (int i = 0; i < minutes; ++i) {
            if (grumpy[i] == 1) {
                addup += customers[i];
            }
        }
        maxi = addup;
        for (int i = minutes; i < customers.size(); ++i) {
            if (grumpy[i] == 1) {
                addup += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                addup -= customers[i - minutes];
            }
            maxi = max(maxi, addup);
        }
        return total + maxi;
    }
};
