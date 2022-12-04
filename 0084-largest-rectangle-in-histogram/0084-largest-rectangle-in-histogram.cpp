class Solution {
public:
    
     ////**********************Aditya Verma*************************////
int largestRectangleArea(vector<int>& heights) {
    if(heights.size()==0){
        return 0;
    } else if(heights.size()==1){
        return heights[0];
    }
    int n = heights.size(), area = 0;
    int *nsl = new int[heights.size()];
    int *nsr = new int[heights.size()];
    
    std::stack<int> st;
    for(int i=heights.size()-1;i>=0;i--){
        while(!st.empty() && heights[i]<=heights[st.top()]){
            st.pop();
        }
        if(st.empty()){
            nsr[i]= heights.size(); 
        } else{
           nsr[i]= st.top();
        }
        st.push(i);
    }
    std::stack<int> stackk;
    for(int i=0;i<heights.size();i++){
        while(!stackk.empty() && heights[i]<=heights[stackk.top()]){
            stackk.pop();
        }
        if(stackk.empty()){
            nsl[i]= -1;
        } else{
           nsl[i]= stackk.top();
        }
        stackk.push(i);
    }
    
    area = INT_MIN;
    for(int i=0;i<heights.size();i++){
        int temp = (nsr[i]-nsl[i]-1)*heights[i];
        if(area<temp){
            area = temp;
        }
    }
    return area; 
}
};


// class Solution {
//   private:
   
//       vector<int>leftsmall(vector < int > heights)
//        {
//            stack <pair< int, int >> s; // [ heights[i]  ,  i ]
      
//         vector < int > left;
//        int tempidx1 = -1; 
//         for (int i = 0; i < heights.size(); i++) {
//           if (s.empty()) {
//             left.push_back(tempidx1);

//           } 
//           else if (!s.empty() && s.top().first < heights[i])
//           {
//             left.push_back(s.top().second);
//           } 
//           else if (!s.empty() && s.top().first >= heights[i])
//           {
//             while (!s.empty() && s.top().first >= heights[i])
//             {
//               s.pop();
//             }
//             if (s.empty())
//              {
//                 left.push_back(-1);
//              }
//                else 
//              {
//                 left.push_back(s.top().second);
//               }
//             }
//             s.push(heights[i],i);  
//           }
//            s.delete();
//           return left;

//         }

        

// /////////////////////////////////////////////////////////////////////////////////////////////////////

//         vector < int > rightsmall(vector < int > heights) {
//           stack <pair< int, int >> s;
//           vector < int > right;
//           tempidx2 = heights.size();

//           for (int i = 0; i < heights.size(); i++)
//            {
//             if (s.empty()) 
//             {
//               right.push_back(tempidx2);

//             } else if (!s.empty() && s.top().first < heights[i])
//              {
//               right.push_back(s.top().second);
//             }
//              else if (!s.empty() && s.top().first >= heights[i]) 
//              {
//               while (!s.empty() && s.top().first >= heights[i])
//               {
//                 s.pop();
//               }
//               if (s.empty() {
//                   right.push_back(-1);
//                 } else {
//                   right.push_back(s.top().second);
//                 }

//               }
//               s.push_back(heights[i],i);
//             }

//             return reverse(right.begin(), right.end());
//           }


//   public:
//  // stack <pair< int, int >> s;

//     int largestRectangleArea(vector <int> & heights) {
     
//           vector < int > left =  leftsmall(heights);
//           vector < int > right = rightsmall(heights);

//           ////////********** for area ********************//////

//           vector < int > width;

//           for (int i = 0; i < heights.size(); i++) {
//             width.push_back(right[i] - left[i] - 1);

//           }
//           vector < int > area;
//           for (int i = 0; i < heights.size(); i++) {
//             area.push_back(width[i] * heights[i]);
//           }
//           return max(area);
//         }
//       };