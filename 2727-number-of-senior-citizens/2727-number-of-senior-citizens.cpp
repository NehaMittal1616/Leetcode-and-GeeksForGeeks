class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto detail:details)
        {
            // '0' to convert a charcter into integer
            if(detail[11]-'0'>6 || detail[11]=='6' && detail[12]-'0'>0)
            {
                count++;
            }
        }
        return count;
    }
};