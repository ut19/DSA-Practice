class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mpp;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        int one=0;
        for(auto it:mpp)
        {
            if(it.second%2 ==0)
            {
                count+=it.second;
               
            }
            else if(it.second==1 && one==0)
            {
                count+=1;
                one=1;
               
            }
            else if(it.second%2 != 0 && it.second!=1)
            {
                count+=(it.second-1);
                mpp[it.first]=1;
              
            }
        }
        for(auto it:mpp)
        {
            if(it.second==1 && one==0)
            {
                count+=1;
                one=1;
               
            }
        }
        return count;
    }
};