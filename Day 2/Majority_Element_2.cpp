#include <bits/stdc++.h> 
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
        map<int,int>mp;
    vector<int>res;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        }
    for(auto itr:mp){
        if(itr.second>arr.size()/3){
            res.push_back(itr.first);
    }
    }
    return res;
}