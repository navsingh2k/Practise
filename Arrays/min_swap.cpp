#include<iostream>
using namespace std;
int main(){
    int a[] = {2,1,5,6,3};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k)
            count++;
    }
    int bad = 0;
    for(int i=0;i<count;i++){
        if(a[i]>k)
            bad++;
    }
    int ans = bad;
    for(int i=0,j=count;j<n;i++,j++)
    {
        if(a[i]>0)
            bad--;
        if(a[j]>0)
            bad++;
            ans=min(ans,bad);
    }
    cout<<ans;
}