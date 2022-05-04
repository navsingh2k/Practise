// * * * * *
//  * * * *
//   * * *
//    * *
//     *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int rows=1;rows<=n;rows++)
    {
        for(int space=1;space<=rows-1;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=n-rows+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


     
