class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int low=0;
        int maxi=INT_MIN;
        for(int high=0;high<nums.size();high++)
        {
            mpp[nums[high]]++;
            while(mpp[0]>k)
            {
                mpp[nums[low]]--;
                low++;
            }
            int len=mpp[1]+mpp[0];
            maxi=max(maxi,len);
        }
        return maxi;
    }
};