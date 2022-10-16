#include<bits/stdc++.h>
using namespace std;
class Heap{
    private : int arr[250];
    int size;
   public: Heap(){
        size = 0;
    }
    void insertion(int ele){
        size = size + 1;
        int index = size;
        arr[index] = ele;
        while(index>1){
            int parentIndex = index/2;
            if(arr[parentIndex]<arr[index])
                swap(arr[parentIndex],arr[index]);
            else
                break;
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    Heap maxHeap;
    maxHeap.insertion(2);
    maxHeap.insertion(6);
    maxHeap.insertion(8);
    maxHeap.insertion(7);
    maxHeap.insertion(3);
    maxHeap.print();
}