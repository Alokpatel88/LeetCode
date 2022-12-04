class Solution {
public:
    bool isCircularSentence(string sentence) {
       // string temp=sentence[0];
        int n=sentence.size();
        for(int i=0;i<n;i++){
            if(sentence[i]==' ' && i+1 < n){
                if(sentence[i-1] != sentence[i+1]){
                    return false;
                }
            }
            
        }
        if(sentence[0]==sentence[n-1]){
            return true;
        }
        else{
            return false;
        }
        
    }
};

        
      