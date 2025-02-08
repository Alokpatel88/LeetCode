class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[j]){
                j++;
                nums[j] = nums[i];
            }
            
        }
        return j +1;


        // set<int> st;
        // for(int i = 0 ; i< nums.size(); i++){
        //     st.insert(nums[i]);
        // }
        // // vector<int>ans;
   
        
        // for(int i = 0; i< nums.size(); i++){
        //     nums.push_back(0);
        // }

        // int cnt = 0;
        // int size = st.size()-1;

        // for(auto it : st){
        //     cout<<it<<" ";
        //     if(cnt < size)
        //     nums[cnt++] = it;
        //     cout<< nums[cnt];

        // }
        // return size;
        
    }
};