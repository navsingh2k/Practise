#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> nsl(int hist[],int n){
    stack<pair<int,int>> s;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            v.push_back(make_pair(-1,-1));
        }
        else if(!s.empty() && s.top().first<hist[i]){
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top().first>=hist[i]){
            while(!s.empty() && s.top().first>=hist[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(make_pair(-1,-1));
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push({hist[i],i});
    }
    return v;
}
vector<pair<int,int>> nsr(int hist[], int n){
    vector<pair<int,int>> v1;
    stack<pair<int,int>> s;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            v1.push_back({-1,n});
        }
        else if(!s.empty() && s.top().first<hist[i])         //no need to add = in this condition otherwise wrong answer.
        {
            v1.push_back(s.top());
        }
        else if(!s.empty() && s.top().first>=hist[i]){       // important >= for repeating element eg {39 27 11 4 24 32 32 1}
            while(!s.empty() && s.top().first>=hist[i]){
                s.pop();
            }
            if(s.empty())
            {
                v1.push_back({-1,n});
            }
            else{
                v1.push_back(s.top());
            }
        }
        s.push({hist[i],i});
    }
    reverse(v1.begin(),v1.end());
   return v1;
}
void printArray(vector<pair<int,int>> a,int n)
{
   for(int i=0;i<n;i++)
    {
        cout<<"Element "<<a[i].first<<" "<<"Index "<<a[i].second<<endl;
    } 
}

int main(){
    int area=0,maxii=INT_MIN;
    int hist[] = {2,3};
    int n = sizeof(hist)/sizeof(hist[0]);
    vector<pair<int,int>> left=nsl(hist,n);
    vector<pair<int,int>> right=nsr(hist,n);
    cout<<"Smaller element to left "<<endl;
    printArray(left,n);
    cout<<endl<<"Smaller element to right "<<endl;
    printArray(right,n);
    for(int i=0;i<n;i++){
        area = hist[i] * (right[i].second-left[i].second-1);
        maxii = max(maxii , area);
    }
    cout<<endl<<"Max Area is "<<maxii;
}