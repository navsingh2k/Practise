#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    stack<int> s;
    int a[]={1,2,4,3};
          //{-1,1,2,2}
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
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
    for(auto a:v){
        cout<<a<<" ";
    }
}