class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size() - 1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i] + nums[j]==target)
                {
                    // vector<int>temp;
                    // temp.push_back(min(nums[i],nums[j]));
                    // temp.push_back(max(nums[i],nums[j]));
                    // ans.push_back(temp);
                        ans.push_back(i);
                        ans.push_back(j);
                        break;

                }
                
              }
         }
 
        return ans;
    }
};