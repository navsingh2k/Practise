#include<iostream>
using namespace std;
int main()
{
    int maxii = INT_MIN;
    int a[3][4]={3,5,11,2,7,9,8,0,5,0,1,3};
    for(int i=0;i<4;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++){
            sum+=a[j][i];
        }
       maxii = max(maxii,sum);
       
    }
    cout<<"Max is "<<maxii;
    
}