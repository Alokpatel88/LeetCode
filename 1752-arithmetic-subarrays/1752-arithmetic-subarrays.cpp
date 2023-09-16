class Solution {
public:
        bool solve(vector<int>&nums,int st,int ed)
         {
             //range from start to end
             vector<int>temp;
             for(int i=st;i<=ed;i++)
                temp.push_back(nums[i]);
              sort(begin(temp),end(temp));
              int diff=abs(temp[1]-temp[0]);
              for(int i=2;i<temp.size();i++)
                {
                    int d=abs(temp[i]-temp[i-1]);
                    if(diff==d)
                    continue;
                    else
                    return false;
                }
                return true;
         }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n=nums.size();
        vector<bool>v;
        for(int i=0;i<l.size();++i)
         {
             int st=l[i],ed=r[i];
            bool res= solve(nums,st,ed);
            v.push_back(res);
         }
         return v;
    }
};