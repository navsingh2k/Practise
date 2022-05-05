#include<bits/stdc++.h>
using namespace std;
int search(int arr[][3],int row,int col,int k){
    int s = 0;
    int e = col - 1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(arr[row][mid] == k)
        {
            cout<<"Element found at indices "<<row<<","<<mid;
            return 0;
        }
        else if(arr[row][mid] > k)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

 int main(){
    int m=3,n=3;
    int a[3][3]={1,5,9,14,20,23,30,34,43};

    int k = 3;
    int s=0;
    int e=m-1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(a[mid][0] == k || a[mid][n-1] == k)
        {
            cout<<"Element found at index "<<mid;
            return 0;
        }
        if(a[mid][0]<k && k<a[mid][n-1])
        {
           int x=search(a,mid,n,k);
           if(x==-1)
            cout<<"Element not present ";
            return 0;
        }
        if(k<a[mid][0])
        {
            e = mid-1;
        }
        if(k>a[mid][n-1])
        {
            s = mid+1;
        }
    }
    
}