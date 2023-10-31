class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
      int first=pref[0];
      vector<int>ans;
      ans.push_back(first);
      for(int i=1;i<pref.size();i++){
            int curr=pref[i]^pref[i-1];
            ans.push_back(curr);
        }
        return ans;
        
        // int currBit=0;
        // vector<int>v;

        // int curr=pref[0];
        // v.push_back(curr);
        // for(int i=1;i<pref.size();i++){
        //    int ans=pref[i]^pref[i-1];
        //    curr=curr^ans;
        //    v.push_back(ans); 
        // }
        // return v;
    }
};