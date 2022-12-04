​
return reverse(right.begin(), right.end());
}
​
​
public:
// stack <pair< int, int >> s;
​
int largestRectangleArea(vector <int> & heights) {
vector < int > left =  leftsmall(heights);
vector < int > right = rightsmall(heights);
​
////////********** for area ********************//////
​
vector < int > width;
​
for (int i = 0; i < heights.size(); i++) {
width.push_back(right[i] - left[i] - 1);
​
}
vector < int > area;
for (int i = 0; i < heights.size(); i++) {
area.push_back(width[i] * heights[i]);
}
return max(area);
}
};
```