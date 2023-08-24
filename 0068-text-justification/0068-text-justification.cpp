class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int width) {
        int length=0;  // to store the length of words in current line
        vector<string> temp;
        vector<string> ans;
        for(auto it: words){
            if(length + temp.size() + it.length() <= width){
                temp.push_back(it);
                length+=it.length();
            }
            else{
                string line=temp[0]; //storing first word of the line
                int spaces=width-length;
                if(temp.size()==1){
                    line+=string(spaces,' ');
                }
                else{
                    int wordspace=spaces/ (temp.size()-1); //spaces needed before every word
                    int extra=spaces % (temp.size()-1);
                    for(int i=1;i<temp.size();i++){
                        
                        line+=string(wordspace,' ');
                        
                        if(extra > 0) {line+=' '; extra--;}  //assigning extra space to left
                        
                        line+=temp[i];
                    }
                }
                ans.push_back(line);
                temp.clear();
                temp.push_back(it);
                length=it.length();
            }
        }
        string last=temp[0]; //for last word
        for(int i=1;i<temp.size();i++){
            last+=' ';
            last+=temp[i];
        }
        last+=string(width-last.length(),' ');
        ans.push_back(last);
        return ans;
    }
};