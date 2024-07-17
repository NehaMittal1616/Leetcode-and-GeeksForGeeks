class Solution {
public:
    bool isPowerOfThree(int n) {
        // power of 3 always +ve
        if(n<=0) return false;
        while(n%3==0)
        {
            n=n/3;
        }
        return (n==1);
    }
};
// TC=> log3(n) log n base 3 , because we are dividing n by 3 each time
// sc=> O(1)