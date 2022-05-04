#include<iostream>
using namespace std;
int getPivot(int a[],int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(a[mid]>a[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int a[]={8,10,17,3,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Pivot element is "<<a[getPivot(a,n)];
}