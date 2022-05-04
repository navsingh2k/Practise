#include<iostream>
using namespace std;
int main(){
    int a[]={0,10,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(a[mid]<a[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    cout<<"Peak index is "<<s;
}