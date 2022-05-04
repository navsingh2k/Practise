#include<iostream>
using namespace std;
int main(){
    int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before rotating "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int temp = a[n-1];
    for(int i=n-1;i>0;i--)
        a[i] = a[i-1];
    a[0] = temp;
    cout<<"After rotating by one"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}