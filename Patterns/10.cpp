#include<iostream>
using namespace std;
int factorial(int n)
{
    int ans=1;
    while(n>0){
        ans=ans*n;
        n--;
    }
    return ans;
}
int ncr(int row,int col){
    int val1=factorial(row);
    int val2=factorial(col);
    int val3=factorial(row-col);
    return (val1/(val3*val2));

    
}
int main(){
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int val=ncr(i,j);
            cout<<val<<" ";
            
        }
        cout<<"\n";
    }

}