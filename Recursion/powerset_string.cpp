#include<bits/stdc++.h>
using namespace std;
void powerset(string input,string output,int index)
{
    if(index>=input.length())
    {
        cout<<output<<endl;
        return;
    }
    //INCLUDE
    char ch = input[index];
    output+=ch;
    powerset(input,output,index+1);
    //EXCLUDE
    output.pop_back();
    powerset(input,output,index+1);
}
int main()
{
    string s="ab";
    string output="";
    int index = 0;
    powerset(s,output,index);
}