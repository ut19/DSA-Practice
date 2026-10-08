class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxi=INT_MIN;
        while(i<j)
        {
            if(height[i]<=height[j])
            {
                int store= height[i]*(j-i);
                maxi=max(maxi,store);
                i++;
            }
            else{
                int store= height[j]*(j-i);
                maxi=max(maxi,store);
                j--;
            }
        }  
        return maxi; 
    }
};