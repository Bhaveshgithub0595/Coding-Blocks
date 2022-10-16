//Find the contiguous subarray within an array,
// A of length N which has the largest sum.
// 
//Input
//1
//5
//1 2 3 4 -10
//Output
//10

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int maxSubArray(vector<int>A){
	int sum = 0, maxi = INT_MIN;
	for(int i = 0; i<A.size(); i++){
		sum+=A[i];
		sum = max(A[i], sum);
		maxi = max(sum, maxi);
	}
	return maxi;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<maxSubArray(ans);
    cout<<endl;
  }
   
}

