//Print the index of target value of each test case
//
//Sample Input
//1
//5
//1 2 4 5 6
//3
//Sample Output
//2

//Binary search 

#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int s = 0;
	
        int e = n-1;
        while(s<=e){
		
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return s;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>nums(n);
       for(int i=0;i<n;i++){
           cin>>nums[i];
       }
       int target;
       cin>>target;
       cout<<searchInsert(nums,target);
       cout<<endl;
   }
   return 0;
}


