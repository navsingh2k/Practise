#include<iostream>
using namespace std;
int factorial(int x){
    int ans=1;
    while(x>1)
    {
        ans=ans*x;
        x--;
    }
   return ans;
}
int main(){
    int n=0;
    int x = factorial(n);
    cout<<"Fact is "<<x;
}