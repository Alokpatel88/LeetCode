class Solution {
public:
    long long dividePlayers(vector<int>& a) {
        sort(a.begin(),a.end());
        long long n=a.size();
        long long j=n-1;
        long long i=0;
         long long sum=a[0]+a[j];
        long long psum=0;
        while(i<j){
            
            long long n1=a[i++];
            long long n2=a[j--];
            
            if(n1+n2 != sum){
                return -1;
            }
            
            long long p1=n1*n2;
            psum=psum+p1;
           
        }
        return psum;
        
    }
};