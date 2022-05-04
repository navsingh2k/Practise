#include<iostream>
using namespace std;
int main(){
    int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int l = 0;
    int r = n-1;
    cout<<"Before before "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    while(l<=r)
    {
        if(a[l]<0 && a[r]<0)
        {
            l++;
        }
        else if(a[l]>0 && a[r]<0)
        {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++;
            r--;
        }
        else if(a[l]>0 && a[r]>0)
        {
            r--;
        }
        else{
            l++;
            r--;
        }
    }
    cout<<endl<<"After sort array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}