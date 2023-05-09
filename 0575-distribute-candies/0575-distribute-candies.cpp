class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int >st;  
        for(auto it: candyType){
            st.insert(it);
        }
        int unique= st.size();
        int total=candyType.size();
        int maxEat=total/2;
        return unique < maxEat ? unique : maxEat;
    }

};