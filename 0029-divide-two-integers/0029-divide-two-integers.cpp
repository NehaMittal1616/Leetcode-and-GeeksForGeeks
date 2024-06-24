class Solution {
public:
    int divide(int divident, int divisor) {
        // USING REPEATED SUBTRACTION -> INEFFICIENT FOR LARGE INPUTS
    //     int ans=0;
    //     int a=abs(divident);
    //    int b=abs(divisor);

    //    while(a>=b)
    //    {
    //     ans++;
    //     a=a-b;
    //    }

    //    if(divident<0 && divisor>0 || divident>0 && divisor<0)
    //    {
    //     return -ans;
    //    }
    //    return ans;

    // USING optimized version of repeated subtracting
    if(divident==divisor) return 1;
    bool sign=false;
    if((divident<=0 && divisor>0) || (divident>=0 && divisor<0))
    {
        sign=true;
    }
         long ans=0;
         long numer=abs(divident);
         long deno=abs(divisor);
         


         while(numer>=deno)
         {
            int cnt=0;
             while(numer  >= (deno<< (cnt+1)))
         {
              cnt++;
         }
              numer=numer-( deno << (cnt));
              ans+=(1<<cnt);
         }
         if(ans== (1<<31 ) && !sign)
         {
            return INT_MAX;

         }
      if( ans<(1<<31) && sign==true)
    {
        return INT_MIN;
    }

    if(sign) return -1*ans;
    return ans;
     
    }
};