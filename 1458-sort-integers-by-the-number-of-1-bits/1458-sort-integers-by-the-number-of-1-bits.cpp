 bool cmp(const pair<int,int>&a, const pair<int,int>&b){
     if(a.second==b.second){
         return a < b;
     }
        return a.second<b.second;
    }
 class Solution {
public:
    vector<int> sortByBits(vector<int>& nums) {
        //cout<<__builtin_popcount(1024)<<endl;
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            int n=__builtin_popcount(nums[i]);
            v.push_back(make_pair(nums[i],n));
        }
        sort(v.begin(),v.end() ,cmp); 

        vector<int>ans;

        for(int i=0;i<v.size();i++){
           ans.push_back(v[i].first);
         //  cout<<ans[i]<<" ";
        }
          return ans;
    }
};