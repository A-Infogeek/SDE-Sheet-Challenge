#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum=0,max=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0)
            sum=0;
         if(max<sum)
             max=sum;
    }
    return max;
}