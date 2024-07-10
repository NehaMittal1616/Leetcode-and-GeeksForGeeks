class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        //how to wrap up?? like after w it should go to a 
        int n=shifts.size();
        // for(int i=0;i<n;i++)
        // {
        //     int shift=shifts[i];
        //     for(int j=0;j<=i;j++)
        //     {
        //      s[j]='a'+ (s[j]-'a'+shift)%26;
        //     }
        // }
        //    return s;

        for (int i = n - 2; i >= 0; --i) {
            shifts[i] = (shifts[i] + shifts[i + 1]) % 26;
        }

        for(int i=0;i<n;i++)
        {
            s[i]='a'+ (s[i]-'a'+shifts[i])%26;
        }
        return s;
    }
    
}; 