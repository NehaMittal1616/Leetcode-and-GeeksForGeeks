class Solution {
public:
// string are immutable in c++ so we cannot replace a charcter in s string using loop 
    string defangIPaddr(string address) {
        string result="";
        for(char ch:address)
        {
            if(ch=='.')
            {
                result+="[.]";
            }
           else  result+=ch;
        }
        return result;
      
    }
};