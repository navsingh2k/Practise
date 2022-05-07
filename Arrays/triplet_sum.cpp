#include<bits/stdc++.h>
using namespace std;
int main(){
     int nums[] = { 1, 4, 45, 6, 10, 8 };
    int n = sizeof(nums)/sizeof(nums[0]);
    sort(nums,nums+n);
    int target = 22;
   
    for(int i=0;i<n-2;i++)
    {
        int temp = target-nums[i];
         int l=i+1,r=n-1;
         while(l<r)
    {
         if(nums[l]+nums[r] == temp)
            {
               cout<<"Triplet is " <<nums[i]<<","<<nums[l]<<","<<nums[r];
               return 0;
            }
          else if(nums[l]+nums[r] > temp){
               r--;
           }
            else{
                l++;
            }
    }
    }
   
    cout<<"Triplet not exists ";
}