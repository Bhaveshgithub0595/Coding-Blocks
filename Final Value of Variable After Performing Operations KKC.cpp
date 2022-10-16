//Output Format
//Print the value after performing all operation of each test cases.
//
//Sample Input
//1
//3
//--X X++ X++
//
//Sample Output
//1


#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
int finalValueAfterOperations(vector<string>& operations) {
        int val=0;
        int n=operations.size();
        for(int i=0;i<n;i++){
            string s=operations[i];
            if(s[0]=='-' or s[2]=='-'){
                val-=1;
            }
            else{
                val+=1;
            }
        }
        return val;
 }

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<string>operations(n);
       for(int i=0;i<n;i++){
           cin>>operations[i];
       }
       cout<<finalValueAfterOperations(operations);
       cout<<endl;
   }
   return 0;
}

