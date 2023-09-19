class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      map<int,int> mp;
      for(auto it: nums){
          mp[it]++;
      }
      for(int i = 1; i<= nums.size(); i++){
          if(mp.find(i) == mp.end()){
              return i;
      }
      }
      if(nums.size() == 1 && nums[0] ==1 )
      return 2;
      return nums.size()+1;
    }
};