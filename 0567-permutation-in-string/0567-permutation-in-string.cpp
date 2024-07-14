class Solution {
public:
// substring is contiguous 
// subsequence is continugous or non contiguous(order should be maintained)
    bool checkInclusion(string s1, string s2) {
        vector<int>s1count(26,0);
        if(s1.length()>s2.length()) return false;
        for(char ch:s1)
        {
        s1count[ch-'a']++;
        }
       int n=s1.length();
       for(int i=0;i<=s2.length()-n;i++)
       {
        vector<int>s2count(26,0);
        string str=s2.substr(i,n);
        for(char ch:str)
        {
            s2count[ch-'a']++;
        }
        if(s1count==s2count)
        {
            return true;
        }
       }
  return false;

    }
};