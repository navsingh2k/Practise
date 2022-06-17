#include<iostream>
using namespace std;
void combinations(string input, string output, int index)
{
    if(index==input.length())
    {
        cout<<output<<endl;
        return;
    }

    //Exclude Space
    char ch=input[index];
    output.push_back(ch);
    combinations(input,output,index+1);
    //Include space
    output.push_back(' ');
    if(input[index+1] != '\0')
       combinations(input,output,index+1);
}
int main()
{
    string input="123";
    string output="";
    int index=0;
    combinations(input,output,index);
    return 0;
}