class Solution {
public:

  bool isPrefixAndSuffix(string s1,string s2)
  {
    int n=s1.size();
    int m=s2.size();
   if(m<n)
   {
    return false;
   }
   // n is smaller than m
   // checking for prefix
   int i=0;
   int j=0;
   while(i<n && j<n)
   {
    if(s1[i]!=s2[j])
    {
        return false;
    }
    i++;
    j++;
   }

  // checking for suffix
  int k=n-1;
  int l=m-1;
  while(k>=0)
  {
    if(s1[k]!=s2[l])
    {
       return false;
    }
     k--;
     l--;
  }
return true;
  }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        int n=words.size();
        for(int i=0;i<n-1;i++)
        {
          for(int j=i+1;j<n;j++)
          {
       if(isPrefixAndSuffix(words[i],words[j]))
       {
        cnt++;
       }
        }
        }
        return cnt;
    }
};