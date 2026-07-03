class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length();
        while(i<j)
        {
            while(i<j && !isAlpha(s[i]))i++;
             while(i<j && !isAlpha(s[j]))j--;
            if(tolower(s[i])!=tolower(s[j]))
            return false;

            i++;
            j--;
        }
        return true;
    }
    bool isAlpha(char c)
    {
       return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
};
