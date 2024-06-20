#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

 bool compare(string s1, string s2)
 {
    int n=s1.length();
    int m=s2.length();
    if((n-m)!=1)
    {
        // should differ by one character only
        return false;
    }
   int first=0;
   int second=0;
   while(first<n)
   {
    if( second<m && s1[first]==s2[second])
    {
        first++;
        second++;
    }
    else
    {
        first++;
    }
   }
   // if both reaches the end together then true otherwise false
   if(first==n && second==m) return true;
   return false;
    
 }
// sorting according to length
 static bool comparator(string &a, string &b)
 {
   return a.size()<b.size();
 }
 // using the concept of longest increasing subsequence
 // TC- O(N^2)
 // SC- O(N)
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), comparator); // sort the vector of strings
        // sorting according to the comparator
       int n=words.size();
       int maxi=1;
       vector<int>dp(n,1); 
       for(int i=0;i<n;i++)
       {
        for(int prev=0;prev<i; prev++)
        {
            if(compare(words[i], words[prev]) && dp[i]<1+dp[prev])
            {
                dp[i]=1+dp[prev];
            }
        }
        maxi=max(maxi,dp[i]);
       }
       return maxi; 
    }
};