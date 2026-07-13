class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a=nums[0];
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int b=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=a )
            {
                int temp = a*nums[i];
                maxi=max(maxi,temp);
                a=nums[i];
            }
            else if(nums[i]<a)
            {
                int temp2=a*nums[i];
                maxi=max(maxi,temp2);
            }
            if(nums[i]<=b)
            {
                int temp3=b*nums[i];
                mini=min(mini,temp3);
                b=nums[i];
            }
            else if(nums[i]>b)
            {
                int temp4=b*nums[i];
                mini=min(mini,temp4);
            }
        }
        return maxi-mini;
    }
};