#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int n=sizeof(a)/sizeof(a[0]);
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]>1){
            cout<<a[i];
            return 0;
        }

    }

}