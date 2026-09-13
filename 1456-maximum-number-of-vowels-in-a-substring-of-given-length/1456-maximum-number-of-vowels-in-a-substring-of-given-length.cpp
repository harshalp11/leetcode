class Solution {
public:
    bool isvowels(char c)
    {
      if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
      {
        return true;
      }
      return false;
    }
    int maxVowels(string s, int k) {

        int count =0;
        for(int i =0;i<k;i++)
        {
            if(isvowels(s[i]))
            {
                count++;
            }
        }
        int maxcount=count;

        for(int j=k;j<s.size();j++)
        {
            if(isvowels(s[j-k]))
            {
                count--;
            }

            if(isvowels(s[j]))
            {
                count++;
            }

            maxcount=max(count,maxcount);
        }
        return maxcount;
    }
};