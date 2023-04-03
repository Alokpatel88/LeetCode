class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        for(int i=1;i<n;++i){
            for(int j=2;j<=n;++j){
                if(i<j && __gcd(i,j)==1){
                    string temp = to_string(i)+"/"+to_string(j);
                    ans.push_back(temp);   
                }
            }
        }
        return ans;
    }
};