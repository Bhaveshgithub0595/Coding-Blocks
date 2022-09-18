#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int sr=0;
	int er=m-1;
	int sc=0;
	int ec=n-1;

while(sr<=er && sc<=ec){
	for(int i=sr;i<=er;i++){
		cout<<arr[i][sc]<<","<<" ";
	}
	sc++;

	if(sc<=ec){
		for(int j=sc;j<=ec;j++){
			cout<<arr[er][j]<<", " ;
		}
	}
	else{
		break;
	}
	er--;
	if(er>=sr){
		for(int k=er;k>=sr;k--){
			cout<<arr[k][ec]<<", ";
		}
	}
	else{
		break;
	}
	ec--;
	if(ec>=sc){
		for(int l=ec;l>=sc;l--){
			cout<<arr[sr][l]<<", ";
		}
	}
	else{
		break;
	}
	sr++;
}
cout<<"END";
}

	
