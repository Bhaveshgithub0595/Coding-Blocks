//The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).
//
//Input Format
//First line contains integer t which is number of test case. 
//First Line of each test case contain n number of elements in array
//Second Line of each test case contain n elements of array
//
//Output Format
//For each test case return bool value of array.
//
//Sample Input
//1
//5
//1 2 10 5 7
//
//Sample Output
//True

#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;

bool canBeIncreasing(vector<int>& nums) {
        int left=0;
        int right=0;
        int n=nums.size();
        int last=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(last>nums[i])
                last=nums[i];
            else
                right++;
        }
        last=nums[0];
        for(int i=1;i<n;i++){
            if(last<nums[i])
                last=nums[i];
            else
                left++;
        }
        if(min(left,right)>1){
            return false;
        }
        return true;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       if(canBeIncreasing(arr)){
           cout<<"True"<<endl;
       }
       else{
           cout<<"False"<<endl;
       };   
   }
   return 0;
}

