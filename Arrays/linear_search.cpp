#include<iostream>
using namespace std;
int main(){
    int a[]={ 2, 3, 4, 10, 40};
    int n = sizeof(a)/sizeof(a[0]);
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(a[i]==key)
        {
            cout<<"Key found at index "<<i;
            return 0;
        }
    }
    cout<<"Key not found ";
    return 0;
}