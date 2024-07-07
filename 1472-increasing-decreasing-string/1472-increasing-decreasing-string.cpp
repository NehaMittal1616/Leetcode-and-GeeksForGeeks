class Solution {
public:
    string sortString(string s) {
       int n=s.size();
       vector<int>freq(26,0);
       for(char ch:s)
       {
        freq[ch-'a']++;
       } 
       // freq array contains the frequency of each element
       string ans="";
       

       while(ans.size()<n)
       {
        // step -> 1 ,2 ,3
        for(int i=0;i<26;i++)
        {
            if(freq[i]>0)
            {
                ans+=(i+'a');
                freq[i]--;
            }
        }

        // step-> 4,5,6
        for(int j=25; j>=0;j--)
        {
          if(freq[j]>0)
          {
            ans+=(j+'a');
            freq[j]--;
          }
        }
       }
       return ans;

    }
};