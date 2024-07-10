class Solution {
public:
// recursive function to get the power of a number
int pow(int x ,int i)
{
    if(i==0) return 1;
    if(i==1) return x;
    return x*pow(x,i-1);
}
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>ans;
        set<int>st;
        if(x==1 && y==1)
        {
            if(x+y<=bound)
            {
                return {2};
            }
        }
        // agar pow(x,i)>bound toh ismein jo bhi add karenge that will also be greater than bound so no need to continue computing 
        // same for powa(y,j) -> if pow(y,j)>bound then anything added to pow(y,j) will also be >bound
       for(int i=0;i<=sqrt(bound) && pow(x,i)<=bound; i++)
       {
        for(int j=0;j<=sqrt(bound) && pow(y,j)<=bound;j++)
        {
            if(pow(x,i)+pow(y,j)<=bound)
            {
                st.insert(pow(x,i)+pow(y,j));
            }
            else
            {
                break;
            }
        }
       }
    //  while(!st.empty())
    //  {
    //     int element=*st.begin();
    //     ans.push_back(element);
    //     st.erase(element);
    //  }
      ans.assign(st.begin(),st.end());
     return ans;

    }
};