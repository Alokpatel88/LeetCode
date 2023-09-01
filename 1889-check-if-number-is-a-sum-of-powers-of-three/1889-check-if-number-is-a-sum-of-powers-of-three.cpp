class Solution {
public:
    bool checkPowersOfThree(int n) {
        vector<int>v;
        for(int i = 0; i <= 16; i++){
            v.push_back(pow(3,i));
        }
        int sum = 0;

        for(int i =v.size()-1; i>= 0; i--){
            int tmp = sum + v[i];
            if(tmp == n){
                return true;
            }
            if(tmp < n){
                sum = tmp;
            }
        }
        return false;
    }
};