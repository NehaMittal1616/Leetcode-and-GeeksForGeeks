class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
      unordered_map<char, int>mp;
      int n=s.size();
      int maxi=-1;
      for(int i=0;i<n;i++)
      {
        char ch=s[i];
        if(mp.find(s[i])!=mp.end())
        {
   maxi=max(maxi, abs(i-mp[s[i]]-1));
        }
        else
        {
            mp[s[i]]=i;
        }
      }
      return maxi;
    }
};