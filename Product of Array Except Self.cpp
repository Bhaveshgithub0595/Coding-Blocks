#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     long int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     long long int product=1;
     for(int i=0;i<n;i++){
         product=product*arr[i];

         }
         for(int i=0;i<n;i++){
             cout<<product/arr[i]<<" ";
         }
}


