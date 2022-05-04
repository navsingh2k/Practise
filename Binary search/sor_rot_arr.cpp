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
int binarySearch(int a[],int s, int e,int key){
    int l=s;
    int r=e;
    int mid = l + (r-l)/2;
    while(l<=r){
        if(key==a[mid]){
            return mid;
        }
        else if(key<a[mid]){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        mid = l + (r-l)/2;
    }
    return -1;
}
int main(){
    int a[]={8,10,17,3,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    int key;
    cin>>key;
    int pivot=getPivot(a,n);
    if(key>=a[pivot] && key<=a[n-1]){
        int ans1 = binarySearch(a,pivot,n-1,key);
        cout<<ans1;
    }
    else{
       int ans2 = binarySearch(a,0,pivot-1,key);
       cout<<ans2;
    }

}