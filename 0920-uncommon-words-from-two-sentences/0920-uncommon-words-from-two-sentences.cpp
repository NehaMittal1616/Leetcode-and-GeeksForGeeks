class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
      unordered_map<string,int>mp;
      int n=s1.length();
      int m=s2.length();
     for(int i=0;i<n;i++)
     {
        int j=i;
        while(j<n && s1[j]!=' ' )
        {
            j++;
        }
        string word=s1.substr(i,j-i);
        mp[word]++;
        i=j;
     }
     for(int i=0;i<m;i++)
     {
         int j=i;
        while(j<m && s2[j]!=' ' )
        {
            j++;
        }
        string word=s2.substr(i,j-i);
        mp[word]++;
        i=j;    
     }
      for(auto it:mp)
      {
        if(it.second==1)
        {
            ans.push_back(it.first);
        }
      }
      return ans;
    }
};