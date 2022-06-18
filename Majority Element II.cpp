#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    map<int,int> mp;
    int n = arr.size();
    
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    
    for(auto it:mp)
    {
        if(it.second > n/3)
            ans.push_back(it.first);
    }
    return ans;
}
