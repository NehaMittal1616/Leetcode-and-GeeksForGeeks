class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string concatenated="";
        for(auto word:words)
        {
            concatenated+=word;
            if(concatenated==s)
            {
                return true;
            }
            if(concatenated.length()>s.length())
            {
                return false;
            }
        }
        return false;
    }
};