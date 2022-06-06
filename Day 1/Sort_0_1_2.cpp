#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
    int mid=0,low=mid;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid++],arr[low++]);
        }
        else if(arr[mid]==1)
            mid++;
        else
            swap(arr[mid],arr[high--]);
    }
}