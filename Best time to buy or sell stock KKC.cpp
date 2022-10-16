//Print the maximum profit of each test case.
//
//SAMPLE INPUT
//1
//6
//7 1 5 3 6 4
//SAMPLE OUTPUT
//5


#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
   int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            if(mini>prices[i]){
                mini=prices[i];
            }
            else{
                ans=max(ans,prices[i]-mini);
            }
        }
        return ans;
    }
int main()
{
   int t;
   cin>>t;
   while(t--){
     
       int n;
       cin>>n;
       vector<int>prices(n);
       for(int i=0;i<n;i++){
           cin>>prices[i];
       }
       cout<<maxProfit(prices);
       cout<<endl;
   }
   return 0;
}

