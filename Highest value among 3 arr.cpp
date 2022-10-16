//
//Input Format 
//First line contains integer t which is number of test case. 
//First Line of each test case contain n number of elements in array
//Second Line of each test case contain n elements of array
//Output Format
//Print all the peak value of array in each test case.
//
//Sample Input
//1
//3
//0 1 0
//Sample Output
//1


#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) 
{
     int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                return i;
            }
        }
        return n-1;

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
       cout<<peakIndexInMountainArray(arr);
       cout<<endl;
   }
   return 0;
}

