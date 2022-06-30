#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string input = "}}{}}{";
    string temp = "";
    if (input.length() % 2 == 0)
    {

        for (int i = 0; i < input.length(); i++)
        {
           
            if (input[i] == '{')
            {
                s.push(input[i]);
            }
            else
            {
                if (s.empty())
                {
                    temp += input[i];
                }
                else
                {
                    s.pop();
                }
            }
        }
        while (!s.empty())
        {
            temp += s.top();
            s.pop();
        }
       
        int m=0,n=0;
        for(int i=0;i<temp.length();i++)
        {
            if(temp[i]=='{')
                m++;
                else
                n++;
        }
        cout<<(m+n)/2 + n%2;
    }
    else{
        cout<<"Invalid Expression ";
    }
}