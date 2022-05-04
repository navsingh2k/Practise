#include<iostream>
using namespace std;
int main(){
    int a[]={ 6 ,10 ,6 ,2 ,1 ,4 ,0 ,6 ,3 ,1};
    int n = sizeof(a)/sizeof(a[0]);
     cout<<"Before Reverse "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i+=2){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    cout<<endl<<"After reverse array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
