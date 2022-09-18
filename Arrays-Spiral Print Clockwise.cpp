#include<iostream>
using namespace std;
int main() {
	int n;
	int m;
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
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<","<<" ";
	}
	sr++;
	if(sr<=er){
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<","<<" ";
	}
	}
	else{
		break;
	}
	ec--;
	if(ec>=sc){
	for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<","<<" ";
	}
	}
	else{
		break;
	}
	er--;
	if(er>=sr){
	for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<","<<" ";
	}
	}
	else{
		break;
	}
	sc++;

}
	cout<<"END";
return 0;
}
