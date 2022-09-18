#include<bits/stdc++.h>
using namespace std;


vector<int> nextPermutation(int N, vector<int> arr){
        
        next_permutation(arr.begin(), arr.end());
        return arr; 
    }



int main() {

	int t;
	cin >> t;

	while(t--){

		int n; 
		cin >> n;

		vector<int> arr(n);

		for(int i =0; i< n; i++){
			cin>>arr[i];
		}
		
		vector<int> ans = nextPermutation(n, arr);
        // for(int u: ans)
        //     cout<<u<<" ";
		// cout<<"\n";

		for (int u == ans){
			cout<< u <<" ";
		}

	}

	return 0;
}
