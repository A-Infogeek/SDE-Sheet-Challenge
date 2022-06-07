#include <bits/stdc++.h> 
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int max=0,n=arr.size(),count=0;
    for(int i=0;i<n;i++){
        int temp=arr[i];
        if(temp==0 && max<1){
            max++;
            count++;
        }
        for(int j=i+1;j<n;j++){
            temp+=arr[j];
            if(temp==0){
                count=j-i+1;
            }
            if(max<count)
                max=count;
        }
        count=0;
    }
    return max;
}