#include <bits/stdc++.h> 
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    map<int,int>m;
    int res=-1;
    for(int i=0;i<n;i++){
        if (m.find(arr[i]) == m.end()) {
            m[arr[i]] = 1;
        }
        else
        m[arr[i]]++;
    }
    for(auto& itr : m){
        if(itr.second>n/2)
            res=itr.first;
      //  cout<<itr.second<<" ";
    }
    return res;
}