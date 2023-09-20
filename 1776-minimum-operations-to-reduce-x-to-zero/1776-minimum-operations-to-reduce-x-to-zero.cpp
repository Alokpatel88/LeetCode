class Solution {
public:
    int minOperations(std::vector<int> &nums, int x) {
        int tot_sum = 0, sz = nums.size();
        for (int n: nums)
            tot_sum += n;
        int l = 0, r = 0, target = tot_sum - x, curr = 0, max_slice = -1;
        while (l <= r && r < sz) {
            curr += nums[r];
            while (curr > target && l < sz) {
                curr -= nums[l];
                l++;
            }
            if (curr == target)
                max_slice = std::max(max_slice, r - l + 1);
            r++;
        }
        return max_slice == -1 ? -1 : sz - max_slice;
    }
};