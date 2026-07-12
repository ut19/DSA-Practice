class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int count=0;
        for(int i=0; i<nums.size();i++)
        {
            if(count== 0)
            {
                el=nums[i];
                count=1;
            }
            else if(nums[i] == el){
                count++;
            }
            else{
                count--;
            }
        }
        int count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]== el)count2++;
        }
        if(count2> nums.size()/2)
        {
            return el;
        }
        return -1;
    }
};