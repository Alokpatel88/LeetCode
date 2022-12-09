class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
         int area=0;
        while(left<right){
           
           long long currarea=0;
            currarea=(right-left )*min(height[left],height[right]);
            if(currarea>area){
                area=currarea;
            }
            ////////////////////////////////////////////////////////////////////////
            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
                right--;
            }
            
        }
        return area;
    }
};