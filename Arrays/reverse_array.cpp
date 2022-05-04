#include<iostream>
using namespace std;
int main(){
    int a[]={ 2, 3, 4, 10, 40};
    int n = sizeof(a)/sizeof(a[0]);
    int l=0,r=n-1;
    int i=0;
    cout<<"Before Reverse "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    while(l<=r){
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }
    cout<<endl<<"After reverse array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}