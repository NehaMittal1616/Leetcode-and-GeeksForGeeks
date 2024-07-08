class Solution {
public:
    string modifyString(string s) {
        // string result;
        // int n=s.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(s[i]!='?') result+=s[i];
        //     else if(s[i]=='?')
        //     {
                
        //         if(i-1>=0 && i+1<n) 
        //         { int j=0;
        //           char ch=j+'a';
        //           if(ch!=result[i-1] && ch!=s[i+1])
        //           {
        //             result+=ch;
                   
        //           }
        //           else
        //           {
        //             j++;
        //           }
        //         }
        //         else if(i-1<0)
        //         {
        //             int j=0;
        //             char ch=j+'a';
        //             if(ch!=s[i+1])
        //             {
        //             result+=ch;
                  
        //             } 
        //             else j++;
        //         }
        //         else if(i+1>=n)
        //         {
        //             int j=0;
        //             char ch=j+'a';
        //             if(ch!=result[i-1])
        //             {
        //                 result+=ch;
                        
        //             }
        //             else j++; 
        //         }
        //     }
        // }
        // return result;

        // another simple method of doing it 
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                for(char ch='a'; ch<='z'; ch++)
                {
                    if(((i==0) || s[i-1]!=ch) && ( i==n-1 || s[i+1]!=ch))
                    {
                        s[i]=ch;
                        break;
                    }
                }
            }
        }
        return s;
    }
};