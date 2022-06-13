#include<bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
    // Write your code here.
    string res;
    int start=str.length();
    while(start>=0){
        if(str[start]==' ')
            start--;
        else{
            if(res.length()>0)
                res.push_back(' ');
            int j=start;
            while(j>=0 && str[j]!=' ')
                j--;
            res.append(str.substr(j+1,start-j));
            start=j;
        }
    }
    return res;
    
}