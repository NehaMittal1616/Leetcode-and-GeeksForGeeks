#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reformat(string s) {
     int n=s.size();
     vector<int>digits;
     vector<int>alpha;
     for(char ch:s)
     {
        if(!isdigit(ch)) alpha.push_back(ch);
        else digits.push_back(ch);
     }  
     int a= digits.size();
     int b=alpha.size();
     if(abs(a-b)>=2) return "";

     string ans;
     int index=0;
     int index1=0;
     
     if(b>a)
     {
        // start from alphabet 
       for(int i=0;i<n;i++)
       {
        if(i%2==0){
            ans+=alpha[index];
            index++;
        }
        else
        {
            ans+=digits[index1];
            index1++;
        }
       }
     }
     else
     {
        // start from digit
         for(int i=0;i<n;i++)
         {
            if(i%2==0)
            {
                ans+=digits[index];
                index++;
            }
            else
            {
                ans+=alpha[index1];
                index1++;
            }
         }
     }

     return ans;

    }
};