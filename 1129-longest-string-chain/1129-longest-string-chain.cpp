class Solution {
public:
static bool cmp(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}

bool check (string &a, string &b){
    if(a.length()-b.length()!=1){
        return false;
    }
    int i = 0;
    int j = 0;
    while(i<a.length()){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(i==a.length()&& j == b.length()){
        return true;
    }
    return false;
}
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        int maxi = 0;
        int n = words.size();
        vector<int>dp(n,1);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<i;j++){
                if(check(words[i],words[j])){
                    dp[i] = max(dp[i],1+dp[j]);
                }
            }
            maxi = max(maxi , dp[i]);
        }
        return maxi;
    }
};