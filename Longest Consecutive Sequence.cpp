#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    if(n==0)
        return 0;
    
    sort(arr.begin(),arr.end());
    
    int longest=0,cur_longest=1;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
            continue;
        else if(arr[i]==arr[i-1]+1)
            cur_longest++;
        else
            longest = max(longest,cur_longest), cur_longest=1;
    }
    return max(longest,cur_longest);
}
