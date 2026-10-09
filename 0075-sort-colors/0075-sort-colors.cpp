class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)z++;
            else if(nums[i]==1)o++;
        }
        int st=0;
        int end=z+o;
        int j=end-1;
        while(st<=j)
        {
            if(nums[st]==0)
            {
                st++;
            }
            else if(nums[st]==2)
            {
                swap(nums[st],nums[end]);
                end++;
            }
            else {
                swap(nums[st],nums[j]);
                j--;
            }
        }
    }
};