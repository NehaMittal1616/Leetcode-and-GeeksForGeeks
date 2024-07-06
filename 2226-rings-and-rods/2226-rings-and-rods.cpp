class Solution {
public:
    int countPoints(string rings) {
       int n=rings.size(); // n/2 rings will be there 
       int count=0;
       for(int i=0;i<10;i++)
       {
           bool blue=false;
           bool red=false;
           bool green=false;
          for(int j=1;j<n;j++)
          {
            // converting integer into char -> +'0'
              if((i+'0')==rings[j])
              {
                 if(rings[j-1]=='B') blue=true;
                 else if(rings[j-1]=='R') red=true;
                 else if(rings[j-1]=='G') green=true;
              }
              
          }
          if(blue==true && red==true && green==true)
              {
                count++;
              }
       }
       return count;
    }
};