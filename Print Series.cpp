#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	int i=1;
	int j=0;
	while(j<n1){
		if((3*i+2)%n2!=0){
			cout<<3*i+2<<"\n"; 
			j++;
		}
		i++;
	}
	return 0;
}
