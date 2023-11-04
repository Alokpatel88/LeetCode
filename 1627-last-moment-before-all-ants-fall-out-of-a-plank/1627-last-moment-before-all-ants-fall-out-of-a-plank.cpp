class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // Variable to store the time
        int time = 0;

        // Finding the ant which will take the most time to reach the left end
        for(int l: left)
            time = max(time, l);

        // Finding the ant which will take the most time to reach the right end
        for(int r: right)
            time = max(time, n - r);    // (n - r) = the distance from right end

        return time;
    }
};