#include<iostream>
using namespace std;
int main()
{
   int a[]={-10, -5, 3, 4, 7, 9};
   int n=sizeof(a)/sizeof(a[0]);
   int s=0;
   int e=n-1;
   while(s<=e)
   {
       int mid = s + (e-s)/2;
       if(a[mid] == mid){
           cout<<mid;
           return 0;
       }
       else if(a[mid]>mid)
        e = mid-1;
       else
        s = mid+1;
   }
   cout<<"No fixed point ";
}