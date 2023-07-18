//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

string reverseWord(string str) {
    if(str.size() == 0 || str.size() == 1) return str;
    return  str[str.size() - 1] + reverseWord(str.substr(0, str.size() - 1)) ;
}




//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends