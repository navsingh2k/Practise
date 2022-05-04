#include<iostream>
using namespace std;
void squares(int x){
    for(int i=1;i<=x;i++)   cout<<i*i<<" ";
}
int main()
{
    int n=6;
    squares(n);
}