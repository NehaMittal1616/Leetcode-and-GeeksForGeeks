class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     vector<vector<string>>ans;
    //    int n=strs.size();
    //    vector<bool>vis(n,0);
    //    for(int i=0;i<n;i++)
    //    {
    //     if(vis[i]!=1)
    //     {
    //       vector<string>ana;
    //     vis[i]=1;
    //     string s1=strs[i];
    //      ana.push_back(s1);
    //     map<char,int>st1; // stores the charcter and its count
    //     for(int i=0;i<s1.length();i++)
    //     {
    //         st1[s1[i]]++;
    //     }
    //     for(int j=i+1;j<n;j++)
    //     {
    //       string s2=strs[j];
    //       if(vis[j]!=1)
    //       {
    //        map<char,int>st2;
    //        for(int i=0;i<s2.size();i++)
    //        {
    //         st2[s2[i]]++;
    //        }
    //         if(st1==st2 )
    //         {
    //          ana.push_back(s2);
    //          vis[j]=1;
    //         }
    //       }
            
    //     }
    //     ans.push_back(ana);
    //     }
        
    //    }
    //    return ans;


    // OPTIMIZATION :- USING HASH MAP
    //SORTINGGG!!!!!!!!!!!
   unordered_map<string ,vector<string>>anagramgroups;
  

  for(string s:strs)
  {
    string sortedstring=s;
    sort(sortedstring.begin(),sortedstring.end());
    anagramgroups[sortedstring].push_back(s);
  }
  vector<vector<string>>ans;
  for(auto it:anagramgroups)
  {
    ans.push_back(it.second);
  }
  return ans;

        
        
    }
};