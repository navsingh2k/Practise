#include<iostream>
using namespace std;
int main(){
    int a[]={ 0,1,2,0,1,2,0};
    int n = sizeof(a)/sizeof(a[0]);
    int count=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
        }
        else if(a[i]==1)
        {
            count1++;
        }
        else{
            count2++;
        }
    }
    cout<<"Before"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   int i=0;
   while(count)
   {
       a[i] = 0;
       i++;
       count--;
   }
   while(count1)
   {
       a[i] = 1;
       i++;
       count1--;
   }
   while(count2)
   {
       a[i] = 2;
       i++;
       count2--;
   }
   cout<<endl<<"After "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}