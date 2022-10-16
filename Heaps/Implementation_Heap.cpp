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
    void deletion(){
        if(size == 0){
            cout<<"Heap is Empty ";
            return;
    }
        swap(arr[1],arr[size]);
        size = size - 1;
        int index = 1;
        while(index>=1 && index<=size){
            int largest = index;
            int left = index*2;
            int right = (index*2)+1;
            if(left<=size && arr[largest]<arr[left])
                largest = left;
            if(right<=size && arr[largest]<arr[right])
                largest = right;
            if(largest!=index){
                swap(arr[index],arr[largest]);
                index = largest;
            }
            else
                break;

        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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
    maxHeap.deletion();
    maxHeap.print();
    maxHeap.deletion();
    maxHeap.print();
    maxHeap.deletion();
    maxHeap.print();
    maxHeap.deletion();
    maxHeap.print();
    maxHeap.deletion();
    maxHeap.print();
    maxHeap.deletion();
    maxHeap.print();

}