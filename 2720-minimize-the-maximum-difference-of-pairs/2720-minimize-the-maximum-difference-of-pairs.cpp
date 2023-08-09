class Solution {
    int count(vector<int> &v, int &requiredDiff) {
        int diff=0, cnt=0;
        for(int i=1; i<v.size(); i++) {
            diff = v[i] - v[i-1];
            if(diff <= requiredDiff) {
                cnt++;
                i++;
            }
        }

        return cnt;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 0, high = nums[n-1]-nums[0];
        int ans = high, mid;
        while(low <= high) {
            mid = low + (high-low)/2;
            int pairs = count(nums, mid);
            if(pairs >= p) {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        return ans;
    }
};