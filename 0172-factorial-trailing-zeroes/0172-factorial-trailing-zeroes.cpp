class Solution {
public:

// GETTING THE FACTORIAL OF N AND THEN CALCULATING THE NUMBER OF TRAILING ZEROES IS VERY TIME CONSUMING 
// WILL GIVE RUNTIME ERROR

// int fact(int n)
// {
//     if(n<=0) return 0;
//     if(n==1) return 1;
//     return n*fact(n-1);
// }

    int trailingZeroes(int n) {
        // int count=0;
        // int factorial=fact(n);
        // if(factorial==0)
        // {
        //     return 0;
        // }
        // if(factorial%10==0)
        // {
        //     while(factorial%10==0)
        //     {
        //     count++;
        //     factorial=factorial/10;
        //     if(factorial%10!=0)
        //     {
        //         break;
        //     }
        //     }
            
        // }
        // return count;
      
      int count=0;
      for(int i=5;n/i>0 ; i*=5)
      {
        count+=n/i;
      }
      return count;



    }
};