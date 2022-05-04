#include<iostream>
using namespace std;
int integralSqrt(int n)
{
    int l=0,ans;
    int r=n;
    int mid = l + (r-l)/2;
   while(l<=r)
    {
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid>n)
        {
            r=mid-1;
        }
        else if(mid*mid<n)
        {
            ans = mid;
            l=mid+1;
        }
        mid = l + (r-l)/2;
    }
    return ans;
}
double precision(int n,int sqr,int p){
    double factor = 1;
    double ans = sqr; 
    for(int i=0;i<p;i++)
    {
        factor/=10;
        for(double j=ans;j*j<=n;j+=factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n,p;
    cout<<"Enter number ";
    cin>>n;
    cout<<endl<<"Enter precision ";
    cin>>p;
    int sqr = integralSqrt(n);
    double sqrt = precision(n,sqr,p);
   cout<<endl<<"Sqrt of "<<n<<" is "<<sqrt;
   
}