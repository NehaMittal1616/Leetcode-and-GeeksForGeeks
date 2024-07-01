class Solution {
public:
// for one swap -> s and goal must differ at exactly 2 indices 
    bool buddyStrings(string s, string goal) {
        int n=s.length();
        if(n!=goal.length()) return false;

        // if s==goal== abcd then false
        // if s==goal == aabc then true , we can swap s[0], s[1] 
if(s==goal)
{
 unordered_set<char>st;
   for(int i=0;i<n;i++)
   {
    if(st.find(s[i])==st.end()) st.insert(s[i]);
    else if(st.find(s[i])!= st.end()) return true; // means s contains duplicate element
   }
   return false;
}


// counting the number of indices s and goal differ
        vector<int>diff;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=goal[i])
            {
                diff.push_back(i);
            }
        }
        if(diff.size()!=2) return false;
        swap(s[diff[0]], s[diff[1]]);
        return (s==goal);
    }
};