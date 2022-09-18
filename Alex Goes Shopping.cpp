#include<iostream>

using namespace std;

int	 main() {

	int n; 
	cin>>n;

	int amt[n];
	for(int i = 0; i<n; i++){
		cin>>amt[i];
	}
	int m;
	cin>>m;

	for(int j =0; j<m; j++){
		int money, qty;
		cin>>money>>qty;
		int count = 0;
		for(int i=0; i<n; i++){
			if(money%amt[i] == 0){
				count++;
			}
			
		}
		if(count >= qty)
		{
			cout<<"Yes";
		}
		else{
			cout<<"No";
		}
		cout<<endl;
	}

	return 0;
}
