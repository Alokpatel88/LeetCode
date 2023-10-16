class Solution {
public:
    
    vector<int> getRow(int n) {
        n = n + 1;
        vector<int> ans;
        ans.push_back(1);
        long long num = 1;
        for(int i = 1; i < n  ; i++){
            num = num * (n - i);
            num = num / i;   
            ans.push_back(num);
        }
        return ans;
    }
};