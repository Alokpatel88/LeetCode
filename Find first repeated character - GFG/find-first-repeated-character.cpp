//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_map<char,int>mp;
    string res="";
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
         if(mp[s[i]]>1){
           res+=s[i];
            return res;
        }
    }
    return "-1";
    
}

// unordered_map<char,int>mp;
// string res="";
// for(int i=0;i<s.length();i++){
//     mp[s[i]]++;
//     if(mp[s[i]]>1){
//         res+=s[i];
//         return res;
//     }
// }
//   return "-1";  
    
    
// }