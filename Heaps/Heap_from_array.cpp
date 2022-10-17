#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int size, int i)
{

    int largest = i;
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;
    if (left < size && arr[largest] > arr[left])
        largest = left;
    if (right < size && arr[largest] > arr[right])
        largest = right;
    if (largest != i)
    {

        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}
void buildHeap(int arr[], int size)
{
    cout << "build heap";
    int index = (size / 2) - 1;
    for (int i = index; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
}
void printHeap(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {12,15,11,9,8,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    buildHeap(arr, size);
    printHeap(arr, size);
}