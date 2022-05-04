#include<iostream>
using namespace std;
int main(){
    int ans = INT_MIN;
    int sum=0;
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        ans = max(ans,sum);
        if(sum<0)   sum=0;
    }
    cout<<"Max Sum is "<<ans;
}