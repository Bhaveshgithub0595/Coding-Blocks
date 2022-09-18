#include<bits/stdc++.h>
using namespace std;
int compare(int a,int b){
	string ab=to_string(a)+to_string(b);
	string ba=to_string(b)+to_string(a);
	return ab>ba;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n,compare);
		for(int i=0;i<n;i++){
			cout<<arr[i];
		}
		cout<<endl;

	}
}
