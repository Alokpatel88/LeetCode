class Solution {
public:
    int integerBreak(int n) {
        if(n == 2) return 1;
        int maxRes = INT_MIN;
        for(int i = 0; i < n; i++){
            int temp = n - i;
            for(int j = 2; j < n; j++){
                int power;
                int remainder = (temp % j) == 0 ? 1 : (temp % j);
                if(i == 0){
                    power = pow(j, temp/j) * remainder;
                }
                else{
                    power = pow(j, temp/j) * remainder * i;
                }
                maxRes = max(maxRes, power);
            }
        }
        return maxRes;
    }
};