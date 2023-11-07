class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
           vector<double> vec;

        for (int i = 0; i < dist.size(); i++) {
            double res = ceil(double(dist[i]) /speed[i]);
            vec.push_back(res);
        }

        sort(vec.begin(), vec.end());

        int cnt = 0;

        int time = 0;

        for (int i = 0; i < vec.size(); i++) {
            if(vec[i] <= time) break;
           else{
               cnt++;
               time++;
           }
        }
        

        return cnt;
    }
};