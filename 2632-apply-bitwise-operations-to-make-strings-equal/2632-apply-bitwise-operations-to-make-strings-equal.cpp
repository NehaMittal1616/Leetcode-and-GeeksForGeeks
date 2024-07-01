class Solution {
public:
// in this question we will simply count the number of ones and zeroes in s and target 
// if they have equal number of zeroes and ones then we will be able to convery s into target
// otherwise not
    bool makeStringsEqual(string s, string target) {
        if(s==target) return true;
        int zero1=0;
        int one1=0;
        int zerocnt=0;
        int onecnt=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
         if(s[i]=='1')
         {
            onecnt++;
         }
         if(target[i]=='1')
         {
            one1++;
         }
        }

         if(onecnt>=1 && one1>=1)
         {
            return true;
         }
         return false;

    }
};