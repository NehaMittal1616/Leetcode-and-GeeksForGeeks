class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
       vector<int>result;
       for(int i=0;i<expression.size();i++)
       {
        char c=expression[i];
        if(c=='+' || c=='-' || c=='*' || c=='/')
        {
            // dividing the expressiom into ywo parts 
            string leftpart=expression.substr(0,i);
            string rightpart=expression.substr(i+1);
            // solve for left and right parts 
            vector<int>leftresult=diffWaysToCompute(leftpart);
            vector<int>rightresult=diffWaysToCompute(rightpart);
            // combining
            for(int left:leftresult)
            {
                for(int right:rightresult)
                {
                    if(c=='+')
                    {
                        result.push_back(left+right);
                    }
                    if(c=='-')
                    {
                        result.push_back(left-right);
                    }
                    if(c=='*')
                    {
                        result.push_back(left*right);
                    }

                }
            }
        }
       }
       if(result.empty())
       {
      result.push_back(stoi(expression));
       } 
       return result;
    }
};