class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0;
        int n=1;
        int s=nums.size();
        vector<int>result(s,0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                result[n]=nums[i];
                n+=2;
            }
            else{
                result[p]=nums[i];
                p+=2;
            }
        }
        return result; 
    }
};