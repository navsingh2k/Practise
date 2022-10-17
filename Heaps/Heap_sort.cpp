#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int size,int i){
    int largest = i;
    int left = i*2+1;
    int right = i*2+2;
    if(left<size && arr[largest]<arr[left])
        largest = left;
    if(right<size && arr[largest]<arr[right])
        largest = right;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,size,largest);
    }
}
void heapSort(int arr[],int size){
    int index = size/2-1;
    for(int i=index;i>=0;i--){
        heapify(arr,size,i);
    }
    for(int i = size-1;i>=0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}
void printHeap(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr,size);
    printHeap(arr,size);
}