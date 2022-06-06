#include<iostream>
using namespace std;
int solve(int coin[],int n,int amount,int currentcoin)
{
    if(amount == 0)
        return 1;
    if(amount < 1)
        return 0;
    int ways = 0;
    for(int i=currentcoin;i<n;i++)
    {
        ways+=solve(coin,n,amount-coin[i],i);
    }
    return ways;
}
int main()
{
    int coin[]={1,2};
    int amount = 4;
    int n = 2;
    cout<<"Total no. of ways to make Rs."<<amount<<" is "<<solve(coin,n,amount,0);
    return 0;

}