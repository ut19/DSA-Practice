class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
         s.erase(remove(s.begin(),s.end(),' '),s.end());
        int j=s.size()-1;
        
        while(i<j)
        {
            char a=tolower(s[i]);
            char b=tolower(s[j]);
            if(a==b && ((a>='a'&&a<='z')||(a>='0'&&a<='9'))&&((b>='a'&&b<='z')||(b>='0'&&b<='9')))
            {
                i++;
                j--;
            }
            else if(a!=b && ((a>='a'&&a<='z')||(a>='0'&&a<='9'))&&((b>='a'&&b<='z')||(b>='0'&&b<='9')))return false;
            else if((a<'a'|| a>'z')&&(a<'0'||a>'9'))
            {
                i++;
            }
            else if((b<'a'|| b>'z')&&(b<'0'||b>'9')){
                j--;
            }
        }
        return true;
    }
};