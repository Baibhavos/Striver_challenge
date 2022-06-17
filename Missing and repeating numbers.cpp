#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    map<int,int> m;
    pair<int,int> p;
    
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
        if(m[arr[i]]>1)
        {
            p.second = arr[i];
            arr[i] = 0;
        }
    }
    
    int a = n*(n+1)/2;    
    int sum = accumulate(arr.begin(),arr.end(),0);
    p.first = abs(a - sum);    
    
    return p;
}
