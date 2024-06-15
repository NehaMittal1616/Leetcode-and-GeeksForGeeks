class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int onecnt=0;
        int zerocnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                onecnt++;
            }
            if(s[i]=='0')
            {
                zerocnt++;
            }
        }
      return  string(onecnt-1, '1')+ string(zerocnt,'0')+ '1';


    }
};