class Solution {
public:
   bool isPowerOfTwo(long int n) {
       bool  temp=0;
        for(int i=0;i<31;i++)
        {   
          long int  val=pow(2,i);
            if( val == n)
                return true;
        }
           return false;
   }
};

