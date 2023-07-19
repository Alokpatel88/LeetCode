//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    
    public:
   stack<int> tmpst;
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>& st, int n) {
       // int rem = n/2;
        
        // Remove the middle element from the stack
         int rem = n/2 + 1;
      while( rem -- ){
          tmpst.push(st.top());
          st.pop();
          if(rem == 1){
              st.pop();
              rem --;
          }
      }
        // Restore the remaining elements to the stack
        while (!tmpst.empty()) {
            st.push(tmpst.top());
            tmpst.pop();
        }
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends