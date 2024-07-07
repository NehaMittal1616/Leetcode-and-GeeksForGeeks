class Solution {
public:
    string sortSentence(string s) {
        vector<string>words(10);
        int n=s.size();
         int i=0;
         while(i<n)
         {
            int j=i;
           while(j<n && !isdigit(s[j]))
            {
                j++;
            }
            if( j<n && isdigit(s[j]))
                {
                    int pos=s[j]-'0';
                    words[pos]=s.substr(i,j-i);
                    i=j+2;
                   
                }
         }
         string ans="";
         for(int i=1;i<words.size();i++)
         {
            if(!words[i].empty())
            {
                if(!ans.empty())
               {
                  ans+=" ";
               }
               ans=ans+words[i];
            }
            
         }
         return ans;
    }
};