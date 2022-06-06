#include<iostream>
using namespace std;
int optimalgame(int a[],int i,int j){
    if(i>j)
    {
        return 0;
    }
    int choice1 = a[i]+min(optimalgame(a,i+2,j),optimalgame(a,i+1,j-1));
    int choice2 = a[j]+min(optimalgame(a,i+1,j-1),optimalgame(a,i,j-2));
    return max(choice1,choice2);
}
int main(){
    int a[] = {20,30,2,2,2,10};
    int i=0,j=5;
    cout<<"Ans is " <<optimalgame(a,i,j);
    return 0;
}