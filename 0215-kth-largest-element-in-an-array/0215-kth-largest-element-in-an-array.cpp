class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int , vector<int> , greater<int> >pq;
       for(auto it : nums){
           pq.push(it);
           if(pq.size() > k){
                pq.pop();
           }
       }
    //    int n = pq.size() - (k);
    //    while(n--){
    //        pq.pop();
    //    }
       return pq.top();
    }
};