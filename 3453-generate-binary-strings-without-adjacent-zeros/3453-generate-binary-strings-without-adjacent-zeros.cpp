class Solution {
public:

void generatestring(int n , string current, vector<string>&result)
{
    if(current.length()==n)
    {
        result.push_back(current);
        return ;
    }
    // now we add 1 or 0 to current based on previously added character 
    // it is always safe to add '1'
    // but 0 can only be added if previously added character is not '0'
   
   // add '1'
   generatestring(n,current+'1', result);

   // add '0'
  if(current.length()==0 || current.back()!='0')
  {
    generatestring(n, current+'0', result);
  }
   

}


    vector<string> validStrings(int n) {
       vector<string>result;
       generatestring(n , "", result);
       return result; 
    }
};