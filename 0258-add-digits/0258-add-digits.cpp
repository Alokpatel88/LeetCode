class Solution {
public:
    int addDigits(int num) {
        int sum,res;
        if(num==0){
            return 0;
        }
        sum=num%10+addDigits(num/10);
        
       if(sum/10 == 0){
          return sum;
       }
       
        else{
            res=addDigits(sum);
        }
       return res;
        
    }
};