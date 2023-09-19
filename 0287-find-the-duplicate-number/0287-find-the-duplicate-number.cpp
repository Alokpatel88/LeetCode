class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> st;
        sort(nums.begin(),nums.end());
        for(auto it : nums){
            if(st.count(it)) 
            return it;
            st.insert(it);
        }
        
        return -1;
    }
};