class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long left=0;
        long long  right=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++)sum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            if(i>0) left+=nums[i-1];
            right=sum-nums[i]-left;
            if(left==right)return i;

        }
        return -1;
    }
};