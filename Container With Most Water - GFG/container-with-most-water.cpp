//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    if(len==1){
        return 0;
    }
    int i=0,j=len-1;
    int mx=INT_MIN;
   while(i<j){
       int mn=min(A[i],A[j]);
       int area=mn*(j-i);
       mx=max(mx,area);
       
       if(A[i]<A[j]){
           i++;
       }
      else if(A[i]>A[j]){
           j--;
       }
       else{
           i++;
           j--;
       }
       
   }
       
       return mx;
   
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends