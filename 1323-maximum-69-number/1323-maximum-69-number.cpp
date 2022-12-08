class Solution {
public:
    int maximum69Number (int num) {
        
        string str;
        str = to_string(num);
        for(int i=0 ;i<str.size();i++){
            if(str[i]=='6'){
                str[i]='9';
                break;
            }
        }
        int ans=stoi(str);
        return ans;
        
        
        
//         vector<int>ans;
//         while(num){
//             int dig=num%10;
//             ans.insert(ans.begin(),dig);
//             //vector_name.insert(vector_name.begin() + 3, 100);
//             num=num/10;
//         }
//         int cnt=0;
//         for(int i=0;i<ans.size();i--){
//             if(ans[i]==6){
//                 ans[i]=9;
//                 cnt++;
//                 break;
//             }
//         }
//         int num1=0;
//         for(int i=0;i<ans.size();i++ ){
//             num1=num1*10+ans[i];
//         }
        
//         return num1;
    }
};