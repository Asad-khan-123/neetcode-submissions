class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int n=heights.size();
        int height;
        int width;
        int area; int j=n-1;
        int i=0;
        while(i<j){
            height = min(heights[i], heights[j]);
            width = j-i;
            area = height*width;
            ans = max(ans, area);
            if(heights[i] > heights[j]){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};
