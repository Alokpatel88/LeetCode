//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
 vector < long long int> dp(100001, -1); 
 class Solution {
     int MOD = 1000000007;
  public:
    int nthFibonacci(int n){
        
        if( dp [n] != -1){
            return dp[n];
        }
        if( n <= 1){
            return dp[n]  = n;
        }
        return  dp[n]  =  (nthFibonacci(n - 1) % MOD + nthFibonacci( n - 2) % MOD ) % MOD;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends