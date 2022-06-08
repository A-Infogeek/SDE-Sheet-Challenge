#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char>st;
    for(int i=0;i<expression.length();i++){
        char ch=expression[i];
        //char temp=st.top;
        if(ch=='(' || ch=='{'|| ch=='[')
            st.push(ch);
        else if(ch==')'  && st.size()>0 && st.top()=='('){
            st.pop();
        }
        else if(ch==']'  && st.size()>0 && st.top()=='['){
            st.pop();
        }
        else if(ch=='}' && st.size()>0 && st.top()=='{'){
            st.pop();
        }
        else
            return false;
    }
    if(st.size()==0)
    return true;
    return false;
}