class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0;
        int curr= capacity;
        int balance = capacity;

        for(int i=0; i < plants.size(); i++){
            if(plants[i] <= curr){
                steps += 1;
                //cout<<steps<<" ";
                curr -= plants[i];
            }
            else{
                curr = capacity-plants[i];
                steps += (2*i + 1);
                //cout<<steps<<" ";
          }
        }
        return steps;
    }
};