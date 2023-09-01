class Solution {
public:
    string sortSentence(string s) {
        map<int,string>m;
        string temp = "", res = "";

        for(auto &x : s) {
            if(x == ' ') continue;
            if(isdigit(x)) {
                int i = x - '0';
                m[i] = temp;
                temp = "";
                continue;
            }
            temp += x;
        }

        for(auto &x : m){ 
            res += x.second;
            res += " ";
        }
        res.pop_back();
        return res;

    }
};