class Solution {
public:
    bool isPalindrome(int x) {
        ostringstream str1;
        str1 << x;
        string pal = str1.str();
        int c=pal.size()-1;
        int i=0;
        while(c>=i)
        {
            if(pal[i]!=pal[c])
            {
                return false;
            }
            c--;
            i++;
        }
        return true;
    }
};
