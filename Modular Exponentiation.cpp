#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    //    Method - 2
//     long int res=1;
//     long xx = x%m;
    
//     if(xx==0)
//         return 0;
    
//     while(n>0)
//     {
//         if(n%2!=0)
//         {
//             res = (res*xx%m)%m;
//             n--;
//         }        
//         n = n/2;
//         xx = (xx%m*xx%m)%m;
//     }
//     return int(res%m);
    
    //    Method - 2
    int res=1;
    while(n>0)
    {
        if(n&1)
            res = (1LL * res * (x%m))%m;
        
        x = (1LL* (x%m) * (x%m))%m;
        n = n>>1;
    }
    return res;
}
