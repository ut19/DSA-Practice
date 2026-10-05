class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int,int>mpp;
        for(int i=0;i<text.size();i++)
        {
            mpp[text[i]]++;
        }
        int b_num=mpp['b']/1;
        int a_num=mpp['a']/1;
        int l_num=mpp['l']/2;
        int o_num=mpp['o']/2;
        int n_num=mpp['n']/1;
        int ans=min(b_num,a_num);
        ans=min(ans,l_num);
        ans=min(ans,o_num);
        ans=min(ans,n_num);
        return ans;
    }
};