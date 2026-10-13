class Solution {
public:
    int find(vector<int>& fq)
    {
        int cnt=fq[0];
        for(int i=1;i<fq.size();i++)
        {
            cnt=max(cnt,fq[i]);
        }
        return cnt;
    }
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int low=0;
        int high=0;
        int res=INT_MIN;
        for(high=0;high<s.size();high++)
        {
            freq[s[high]-'A']++;
            int len=high-low+1;
            int maxval=find(freq);
            int diff=len-maxval;
            while(diff>k)
            {
                freq[s[low]-'A']--;
                low++;
                maxval=find(freq);
                len=high-low+1;
                diff=len-maxval;
            }
            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};