//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
 class Solution{
  public:
    vector<int> PosNegPair(int arr[], int n) {
        vector<int> ans;
        unordered_map<int,int> pos,neg;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                pos[arr[i]]++;
            }
            else{
                neg[arr[i]]++;
            }
        }
        for(auto it=pos.begin() ;it!=pos.end();it++){
            int key = it->first;
            auto ptr=neg.find(-key);
            if(ptr!=neg.end()){
            int freq=min(it->second ,ptr->second);
            while(freq--){
                ans.push_back(key);
                ans.push_back(key);
            }
            }
        }
        
        int size=ans.size();
        sort(ans.begin() ,ans.end());
        for(int i=0;i<size;i++){
            if(i%2==0){
                ans[i]=-1*ans[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0) cout << "0";

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends