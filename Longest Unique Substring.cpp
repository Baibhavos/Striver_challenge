#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_set<char> unset;
    
    int i=0,j=0,n=input.size(),ans=0;
    
    while(i<n && j<n)
    {
        if(unset.find(input[j]) == unset.end())
        {
            unset.insert(input[j++]);
            ans = max(ans,j-i);
        }
        else
        {
            unset.erase(input[i++]);
        }
    }
    return ans;
}
