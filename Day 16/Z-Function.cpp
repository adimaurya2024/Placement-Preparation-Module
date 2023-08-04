class Solution {
public:
    int strStr(string haystack, string needle) {
        int x= needle.length();
        int y= haystack.length();
        for(int i=0; i<= y-x; i++)
        {
            for(int j=0; j<x; j++)
            {
                if (needle[j]!=  haystack[i+j])
                {
                    break;
                }
                if(j==x-1)
                {
                    return i;
                }
            }
        }
        return -1;
        
    }
};
