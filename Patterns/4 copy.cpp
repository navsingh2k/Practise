
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int rows=1;rows<=n;rows++)
    {
        for(int space=1;space<=n-rows;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=rows;col++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}


     
