class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int  i =0; int j = nums.size() -1;
        while(i <= j){
            int mid = i + (j - i)/2;
            if(nums[mid] == target){
                int first = mid;
                int second = mid;
             
                  while(first > 0 && nums[first -1 ]== target){
                      first --;
                  }
      
                  while(second < nums.size() - 1 && nums[second+1] == target){
                      second++;
                  }

                  return {first, second};
            }

            if(nums[mid] < target){
                i++;
            }
            else if(nums[mid] > target){
                j--;
            }
        }
        return {-1, -1};

    }
};