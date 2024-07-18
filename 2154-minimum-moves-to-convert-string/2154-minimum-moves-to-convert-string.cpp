class Solution {
public:
    int minimumMoves(string s) {
        int cnt=0;
      int index=0;
      int n=s.length();
      while(index<n)
      {
         if(s[index]=='X')
         {
            cnt++;
            
              index=index+3;
    
             
         }
         else
         {
            index=index+1;
         }
      }
      return cnt;
       
    }
};