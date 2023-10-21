class Solution {
public:
    int myAtoi(string s) {
        // return stoi(s);
        int x = 0;
        stringstream str;
        str << s;
        str >> x;
        return x;
    }
};