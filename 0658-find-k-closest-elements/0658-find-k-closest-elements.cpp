class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // we will sort the arr array on the basis of difference of each element with x
        auto comp=[&](int a, int b)
        {
            if(abs(a-x)!=abs(b-x))
        {
          return abs(a-x)<abs(b-x);
        }
        return a<b;
        };
        // the comp function here is a lambda function which is used to sort the arr array on the basis of difference of each element with x
        // [&] so that it can access x 
        sort(arr.begin(), arr.end(), comp);
        // using lambda function
        vector<int>ans(k);
        for(int i=0;i<k;i++)
        {
            ans[i]=arr[i];
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};