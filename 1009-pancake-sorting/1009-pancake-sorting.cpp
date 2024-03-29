class Solution {
public:
    
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int num = 1;
        bool chk = is_sorted(arr.begin(),arr.end());
        if(chk){
            return ans;
        }
        while(num < n){
            bool flag = false;
            for(int i = 0; i<n-num; i++){
                if(arr[i] == num) {
                    reverse(arr.begin(), arr.begin()+i+1);
                    ans.push_back(i+1);
                    flag= true;
                    break;
                }
            }
            if(flag){
                reverse(arr.begin(), arr.begin() + n - num + 1 );
                ans.push_back(n - num + 1);
            }
            
            num++;
        }
        ans.push_back(n);
        return ans;
    }
};