//An integer n is a power of two, if there exists an integer x such that 
//n == 2^x.
//
//OUTPUT FORMAT
//Print the true or false of each test case.
//
//SAMPLE OUTPUT
//1
//16
//
//SAMPLE INPUT
//True

#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
   bool isPowerOfTwo(int n) {
       return n > 0 && not (n & n - 1);
    }
int main()
{
   int t;
   cin>>t;
   while(t--){
     
       int n;
       cin>>n;
      if(isPowerOfTwo(n)){
          cout<<"True";
      }
      else{
          cout<<"False";
      }
       cout<<endl;
   }
   return 0;
}



