class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string>ans(numRows);
        for(int i=0;i<numRows;i++)
        {
            ans[i]="";
        }
        int i=0;
        while(i<s.length())
        {
            for(int index=0;index<numRows && i<s.length();index++)
            {
                ans[index]+=s[i++];
            }
            for(int index=numRows-2;index>0 && i<s.length();index--)
            {
                ans[index]+=s[i++];
            }
        }
        string result="";
        for(string str:ans)
        {
          result+=str;
        }
        return result;
    }
};