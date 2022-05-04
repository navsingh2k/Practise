#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int m=3,n=4,count=0;
    int total = m*n;
    int startRow = 0;
    int startCol = 0;
    int endRow = m-1;
    int endCol = n-1;
    while(count<total)
    {
        //Printing first row
        for(int i=startCol;count<total && i<=endCol;i++)
        {
            v.push_back(a[startRow][i]);
            count++;
        }
        startRow++;
        // Printing last col
        for(int i=startRow;count<total && i<=endRow;i++)
        {
            v.push_back(a[i][endCol]);
            count++;
        }
        endCol--;
        //Printing last row
         for(int i=endCol;count<total && i>=startCol;i--)
        {
            v.push_back(a[endRow][i]);
            count++;
        }
        endRow--;
        //Printing first col
        for(int i=endRow;count<total && i>=startRow;i--)
        {
            v.push_back(a[i][startCol]);
            count++;
        }
        startCol++;
    }
    for(auto a:v)
    {
        cout<<a<<" ";
    }

}