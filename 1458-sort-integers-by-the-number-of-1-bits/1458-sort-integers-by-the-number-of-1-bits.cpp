class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
     auto countbits=[](int x)
     {
        int count=0;
        while(x)
        {
            count+=x&1;
            x>>=1;
        }
        return count;
     };   

     auto comp=[countbits](int a,int b)
     {
        int bitsA=countbits(a);
        int bitsB=countbits(b);
        if(bitsA==bitsB)
        {
            return a<b;
        }
        return bitsA<bitsB;
     };

     sort(arr.begin(), arr.end(),comp);
     return arr;

    }
};