#include<bits/stdc++.h>
using namespace std;
 long long minCost(long long arr[], long long n) {
        // Your code here
        long long cost = 0;
        priority_queue<long long,vector<long long>,greater<long long>> q;
        for(int i=0;i<n;i++)
            q.push(arr[i]);
        while(q.size()>1){
            long long first = q.top();
            q.pop();
            long long second = q.top();
            q.pop();
            cost += first + second;
            q.push(first+second);
            
        }
        return cost;
    }
int main(){
    long long arr[] = {4, 3, 2, 6};
    long long size  = sizeof(arr) / sizeof(arr[0]);
    cout<<minCost(arr,size);
}