class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int>freq;
       int z=0,o=0;
        int res=INT_MIN;
       for(int i=0;i<nums.size();i++)
       {
            if(nums[i]==0)z++;
            else o++;
            int diff=z-o;
            if(diff==0)res=max(res,i+1);
            if(freq.find(diff)!=freq.end())
            {
                res=max(res,i-freq[diff]);
            }
            else{
                freq[diff]=i;
            }
       } 
       if(res==INT_MIN)return 0;
      return res;
        
    }
};