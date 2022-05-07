#include<bits/stdc++.h>
using namespace std;
int main(){
     int nums[] = {1, 5, 7, -4, 5};
    int n = sizeof(nums)/sizeof(nums[0]);
    sort(nums,nums+n);
    int target = 3;
    int l=0,r=n-1;
    while(l<r)
    {
         if(nums[l]+nums[r] == target)
            {
               cout<<nums[l]<<","<<nums[r];
               return 0;
            }
          else if(nums[l]+nums[r] > target){
               r--;
           }
            else{
                l++;
            }
        
    }
    cout<<"Pair not exists ";
}