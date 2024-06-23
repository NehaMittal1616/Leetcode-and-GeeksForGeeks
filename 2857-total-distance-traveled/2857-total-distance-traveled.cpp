class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        if(mainTank<5)
        {
            return mainTank*10;
        } 
        int total=0;  
       while(mainTank>=5 && additionalTank>=1)
       {
            total+=5;
            mainTank=mainTank-4;
            additionalTank--;
       }
       if(mainTank>0)
       {
        total+=mainTank;
       }
       return (total*10);
    }
};