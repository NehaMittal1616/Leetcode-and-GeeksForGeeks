class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        vector<int>noto;
        for(int num2:arr2)
        {
            for(int num1:arr1)
            {
                if(num2==num1)
                {
                    ans.push_back(num1);
                }
            }
        }
        set<int>st(arr2.begin(),arr2.end());
        for(int num:arr1)
        {
            if(st.find(num)==st.end())
            {
                noto.push_back(num);
            }
        }
        sort(noto.begin(),noto.end());
        ans.insert(ans.end(), noto.begin(), noto.end());
        return ans;
    }
};