class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        int j=nums.size()-1;
        int i=0;
        sort(nums.begin(),nums.end());
        while(i<j )
        {
            int sum=nums[i]+nums[j];
            if(sum < target)
            {
                count+=j-i;
                i++;
            }
            else {
                j--;
            }
        }
        return count;
    }
};