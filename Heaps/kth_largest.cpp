#include<bits/stdc++.h>
using namespace std;
void kthlargest(int arr[],int size,int k){
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<k;i++)
    {
        q.push(arr[i]);
    }
    for(int i=k;i<size;i++){
        if(q.top()<arr[i]){
            q.pop();
            q.push(arr[i]);
        }
    }
        cout<<q.top()<<endl;
}
int main(){
  int arr[] = {6,5,2,12,15,18};
  int size = sizeof(arr)/sizeof(arr[0]);
  int k = 4;
  kthlargest(arr,size,k);
}