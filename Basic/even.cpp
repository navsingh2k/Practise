#include<iostream>
using namespace std;
void even(int x){
    for(int i=2;i<=x;i=i+2)
    {
        cout<<i<<endl;
    }
}
int main(){
    int n=20;
    even(n);
}