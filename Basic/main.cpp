#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
   for(int i=2;i<n;i++)
   {
       if(n%i==0)
       {
           cout<<"Not Prime";
           return 0;
       }
   }
    cout<<"Prime Number";
    return 0;
}