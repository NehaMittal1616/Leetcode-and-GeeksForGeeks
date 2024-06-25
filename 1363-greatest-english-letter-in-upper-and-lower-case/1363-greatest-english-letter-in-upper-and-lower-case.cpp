class Solution {
public:
    string greatestLetter(string s) {
        // we will be using two sets one to store lowercase alphabets and one to store uppercase alphabet
        set<char>lower;
        set<char>upper;

        for(int i=0;i<s.length(); i++)
        {
            if(islower(s[i]))
            {
                lower.insert(s[i]);
            }
            else
            {
                upper.insert(s[i]);
            }
        }

   int ans=0;
   int maxi=0;
   string greatest="";
        for(auto it:lower)
        {
            if(upper.find(toupper(it))!= upper.end())
            {
                // means its uppercase also exists
                 ans=it;
                 if( maxi<ans){
                    maxi=ans;
                    greatest=toupper(it);
                 }
            }
        }
        return greatest;
    }
};