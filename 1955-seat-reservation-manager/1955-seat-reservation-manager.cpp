class SeatManager {
    priority_queue <int, vector<int>, greater<int> > pq; 
public:
    SeatManager(int n) {  // ---->> n * log n
        for(int i=1;i<=n;i++) // O(n)
            pq.push(i); // O(log n)
    }
    int reserve() {
        int x=pq.top();
        pq.pop();
        return x;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};