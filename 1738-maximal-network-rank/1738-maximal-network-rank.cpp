class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
      
        
        vector<int>rank( n , 0 ) ;
        
        int G[n][n] ;
        
        for( int i = 0 ; i < n ; i++ )
        {
            for( int j = 0 ; j < n ; j++ )
            {
                G[i][j] = 0 ;
            }
        }
        
        for( auto i : roads )
            {
            rank[i[0]]++ ;
            rank[i[1]]++ ;
            G[i[0]][i[1]] = 1 ;
            G[i[1]][i[0]] = 1 ;
            
            }
        
        int ans = 0 ;
       
        for( int i = 0 ; i < n ; i++ )
        {
            for( int j = i + 1 ; j < n ; j++ )
        {
            int temp = rank[i] + rank[j] ;
                
            if( G[i][j] == 1 )
            {
                temp-- ;
            }
                
            ans = max( ans ,  temp ) ;
        }
            
        }

        return ans ;
    
    }
};