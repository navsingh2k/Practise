#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    stack<int> s;
    int a[]={6, 2, 5, 4, 5, 1, 6};
          //{3,2,1,-1}
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=size-1;i>=0;i--){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()<a[i])         //no need to add = in this condition otherwise wrong answer.
        {
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()>=a[i]){       // important >= for repeating element eg {39 27 11 4 24 32 32 1}
            while(!s.empty() && s.top()>=a[i]){
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    for(auto a:v){
        cout<<a<<" ";
    }
}