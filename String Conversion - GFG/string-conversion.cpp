//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
    int f(int i , int j, string s1, string s2){
        if(j==s2.size()){
            for(int k = i; k<s1.size(); k++){
                if(s1[k]>='A' && s1[k]<='Z')
                    return false;
            }
            return true;
        }
        if(i==s1.size()){
            return false;
        }
        int ans = false;
        if(s1[i]>='a' && s1[i]<='z')
            ans = ans | f(i+1, j, s1,s2);
        if(s1[i]==s2[j] || char('A'+s1[i]-'a') == s2[j])
            ans = ans | f(i+1, j+1, s1, s2);
        return ans;
    }    
public:	
	int stringConversion(string X, string Y){
	    for(auto v: Y)
	        if(v>='a' && v<='z')
	            return false;
	    return f(0,0,X,Y);
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s1, s2;
   		cin >> s1 >> s2;

   		Solution ob;

   		cout << ob.stringConversion(s1, s2) << "\n";
   	}

    return 0;
}
// } Driver Code Ends