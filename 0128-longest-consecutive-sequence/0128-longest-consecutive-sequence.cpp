class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int longest=1;
        int n=nums.size()-1;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==prev)continue;
            if(prev+1 == nums[i])
            {
                count++;
                longest=max(longest,count);
                 prev=nums[i];
            }
            else if(nums[i] != prev+1)
            {
                prev=nums[i];
                longest=max(longest,count);
                count=1;
            }
        }
       
        return longest;
    }
};