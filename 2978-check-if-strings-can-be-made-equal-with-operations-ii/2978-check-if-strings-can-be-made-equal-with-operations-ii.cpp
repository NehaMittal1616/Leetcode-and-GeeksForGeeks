class Solution {
public:
// even -even is even
// odd -odd is odd
// even parity charcter can be swapped with even parity character ans same for odd
// we will extract all even indices and odd indices charcters from both strings 
// if even parity charcter in s1 and s2 are same and sam for odd parity charcters then we can convert s1 into s2

    bool checkStrings(string s1, string s2) {
        int n=s1.length();
        vector<char> s1_even , s2_even , s1_odd, s2_odd;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                s1_even.push_back(s1[i]);
                s2_even.push_back(s2[i]);
            }
            else
            {
                s1_odd.push_back(s1[i]);
                s2_odd.push_back(s2[i]);
            }
        }
        sort(s1_even.begin(), s1_even.end());
            sort(s2_even.begin(), s2_even.end());
            sort(s1_odd.begin(), s1_odd.end());
            sort(s2_odd.begin(), s2_odd.end());
        return (s1_even==s2_even) && (s1_odd==s2_odd);
    }
};