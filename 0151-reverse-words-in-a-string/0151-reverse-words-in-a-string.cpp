class Solution {
public:
    string reverseWords(string str) {
        int i = 0; 
        string result = "";
        while (i < str.size()) {
            while (str[i] == ' ' && i < str.size()) {
                i++;
            }
            int j = i + 1;
            while (j < str.size() && str[j] != ' ') {
                j++;
            }
            string substr = str.substr(i, j - i);
           
           if(result == "")
            result = substr;

            else if(j<=str.size())

             result = substr + " " + result;

            i = j + 1;
        }
        return result;
    }
};
