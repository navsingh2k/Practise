#include<iostream>
using namespace std;
void solve(int leftsum,int rightsum,char* output,int i,int j)
{
    if(i>j)
    {
        if(leftsum==rightsum)
        {
            cout<<output<<endl;
        }
        return;
    }
    output[i] = '0';
    output[j] = '0';
    solve(leftsum,rightsum,output,i+1,j-1);
    output[i] = '0';
    output[j] = '1';
    solve(leftsum,rightsum+1,output,i+1,j-1);
    output[i] = '1';
    output[j] = '0';
    solve(leftsum+1,rightsum,output,i+1,j-1);
    output[i] = '1';
    output[j] = '1';
    solve(leftsum+1,rightsum+1,output,i+1,j-1);
    
}

int main()
{
    int n=3;
    char* output=new char[2*n];
    int leftsum=0,rightsum=0;
    solve(leftsum,rightsum,output,0,2*n-1);
}