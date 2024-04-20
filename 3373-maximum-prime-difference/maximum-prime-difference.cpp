class Solution {
public:
bool isprime(int n){
  
        // cout<< " *"<<" ";
        if(n==1) return false;
        if(n == 2) return true;
        
   
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            // cout<< " *"<<" ";
            return false;
            
        }

    }
    // cout<< " *" <<" ";
    return true;
}
    
    int maximumPrimeDifference(vector<int>& nums) {
        int f = INT_MAX;
        int s = INT_MIN;
        for(int i = 0; i< nums.size(); i++){
            if(isprime(nums[i])){
                if(i < f){
                    f = i;
                }
                if( i > s){
                    s = i;
                }
            }
        }
        return abs(s-f);
    }
};