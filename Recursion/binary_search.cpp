
#include <iostream>

using namespace std;
bool binarysearch(int a[], int l, int r, int key){
   if(r>=l)
   {
       int mid = (l+r)/2;
       if(a[mid]==key)
        return mid;
        else if(key<a[mid])
            return binarysearch(a,l,mid-1,key);
        else
            return binarysearch(a,mid+1,r,key);
    }
    return 0;
}

int main()
{
    int a[]={1,2,5,6,7,8,9,12,13,20};
    int size = sizeof(a)/sizeof(a[0]);
    int key = 20;
    int l=0,r=size-1;
    cout<<binarysearch(a,l,r,key);

    return 0;
}