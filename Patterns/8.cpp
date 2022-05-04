// *****
// *  *
// * *
// **
// *
#include<iostream>
using namespace std;
int main(){
    int n=15;
    for(int row=1;row<=n;row++)
    {
        if(row==1||row==n)
        {
            for(int i=1;i<=n-row+1;i++)
            {
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int space=1;space<=n-row-1;space++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}