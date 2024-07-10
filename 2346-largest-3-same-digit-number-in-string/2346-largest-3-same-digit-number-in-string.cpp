class Solution {
public:
    string largestGoodInteger(string num) {
      string ans="";
      int n=num.size();
       // we can sequentially check if 999 , 888 , 777,---- 000 exits 
       // first to be found would be our ans
       // converting character to interger -> ch-'0'

       for(int j=9;j>=0;j--)
       {
          for(int i=0;i<=n-3;i++)
          {
            if((num[i]-'0')==j && (num[i+1]-'0')==j && (num[i+2]-'0')==j)
            {
                return num.substr(i,3);
                break;
            }
          }
       }
       return ans;
         
    }
};