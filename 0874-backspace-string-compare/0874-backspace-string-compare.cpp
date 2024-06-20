class Solution {
public:
    bool backspaceCompare(string s, string t) {
       // using stack
       stack<int>s1;
       stack<int>s2;
       int n=s.size();
       int m=t.size();
       for(int i=0;i<n;i++)
       {
        if(!s1.empty() && s[i]=='#')
        {
            s1.pop();
        }
        else if(s[i]!='#')
        {
            s1.push(s[i]);
        }
       } 

       for(int i=0;i<m;i++)
       {
        if(!s2.empty() && t[i]=='#')
        {
            s2.pop();
        }
        else if(t[i]!='#')
        {
            s2.push(t[i]);
        }
       }
   return (s1==s2);

    }
};