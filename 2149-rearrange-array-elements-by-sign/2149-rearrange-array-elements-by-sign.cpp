class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
        vector<int>negative;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        vector<int>result;
        int k=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(i%2 ==0)
            {
                result.push_back(positive[k]);
                k++;
            }
            else{
                result.push_back(negative[j]);
                j++;
            }
        }
        return result;
    }
};