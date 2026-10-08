class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        vector<int>ans;
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]<0)
            {
                i++;
            }
            nums[k]*=nums[k];
        }
        reverse(nums.begin(),nums.begin()+i);
        int j=i;
        int len=i;
        i=0;
        while(i<len && j<nums.size())
        {
            if(nums[i]<=nums[j])
            {
                ans.push_back(nums[i]);
                i++;
            }
            else {
                ans.push_back(nums[j]);
                j++;
            }
        }
        while(i<len)
        {
            ans.push_back(nums[i]);
            i++;
        }
        while(j<nums.size())
        {
            ans.push_back(nums[j]);
            j++;
        }
        return ans;
    }
};