class Solution {
public:
// get the prime factors of the number, if prime factors include any number other than 2 , 3 and 5 then it is not an ugly number 
// only 2 ,3 and 5-> ugly number true
// else false
// bool primefactors(int n)
// {
//     set<int>primef;
//     while(n%2==0)
//     {
//         primef.insert(2);
//         n=n/2;
//     }
//     for(int i=3;i*i<=n;i+=2)
//     {
//         if(n%i==0)
//         {
//              if(i!=3 && i!=5)
//             {
//                 return false;
//             }
//             primef.insert(i);
//             n=n/i;
           
//         }

//     }
//     if(n>2)
//     {
//         primef.insert(n);
//     }
    
//     return true;
// }

    bool isUgly(int n) {
      if(n==1) return true;
      if(n<=0) return false;
while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        
        return n == 1;

       //return primefactors(n);
    }
};