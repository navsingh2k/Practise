#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    stack<int> s;
    int a[]={6,8,0,1,3};
          //{8,-1,1,3,-1}
    int size = sizeof(a)/sizeof(a[0]);
    for(int i= size-1;i>=0;i--){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()>a[i]){
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()<a[i]){
            while(!s.empty() && s.top()<a[i]){
                s.pop();
                
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
            
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}