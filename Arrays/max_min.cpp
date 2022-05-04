#include<iostream>
using namespace std;
int main(){
    int a[]={ 2, 3, 4, 10, 40};
    int n = sizeof(a)/sizeof(a[0]);
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    cout<<"Max is "<<max<<endl;
    cout<<"Min is "<<min<<endl;
}