class Solution // 100% faster
{
public:
    vector<string> fullJustify(vector<string> &words, int maxWidth)
    {
        // Vector to store the sentences
        vector<string> ans;
       int curr_len = 0, start = 0, end = -1;
        for (string s : words)
        {
            if ((end - start + 1) + curr_len + s.size() <= maxWidth)
                curr_len += s.size(), end++;
            else
            {
                string sentence = words[start];
               long long int extra_space = maxWidth - curr_len, padding = extra_space / max(1, end - start);
              
                int extra = extra_space % max(1, end - start);
                 for (int i = start + 1; i <= end; i++)
                {
                    for ( long long int j = 0; j < padding; j++)
                        sentence += " ";
                    // Add the xtra padding, if needed
                    if (extra)
                        sentence += " ", extra--;
                    sentence += words[i];
                }
               
                while (sentence.size() < maxWidth)
                    sentence += " ";
                ans.push_back(sentence);
               start = end + 1, curr_len = s.size(), end++;
            }
        }
       
        string sentence = words[start];
        for ( long long int i = start + 1; i <= end; i++)
            sentence += " " + words[i];
        while (sentence.size() < maxWidth)
            sentence += " ";
        ans.push_back(sentence);
        return ans;
    }
};