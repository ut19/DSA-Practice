class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int count=0;
        int sum=0;
        freq[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)sum++;
            count+=freq[sum-k];
            freq[sum]++;
        }
        return count;
    }
};