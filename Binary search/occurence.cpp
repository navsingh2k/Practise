#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int x){
    int s=0,ans=-1;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(x==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(x>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int x){
    int s=0,ans=-1;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(x==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(x>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7 ,8 ,8 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=2;
    cout<<"First Occ of 2 at index "<<firstOcc(arr,n,x)<<endl;
    cout<<"Last Occ of 2 at index "<<lastOcc(arr,n,x);
}