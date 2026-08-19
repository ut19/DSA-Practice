class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>ls;
        int n=nums.size();
        int mini= (n/3)+1;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mini)
            {
                ls.push_back(nums[i]);
            }
        }
        return ls;
    }
};