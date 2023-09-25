class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> shash(26,0);
        vector<int> phash(26,0);
         vector<int>ans;
        if (s.size() < p.size()) {
            return ans; 
        }

        for(int i =0; i < p.size(); i++){
            shash[s[i] - 'a']++;
            phash[p[i] - 'a']++;
        }
       
        if(shash == phash) ans.push_back(0);
        for(int i = 1; i <= s.size() - p.size(); i++){
            shash[s[i-1] - 'a']--;
            shash[s[i + p.size() - 1]  -'a']++;
            if(phash == shash) ans.push_back(i);
        }
        return ans;
    }
};