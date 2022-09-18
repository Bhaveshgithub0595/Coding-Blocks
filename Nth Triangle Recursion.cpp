#include<iostream>
using namespace std;

int nt(int n){
	int sum;
	if(n==0)
	{
		return 0;
	}
	sum = n+nt(n-1);
	return sum;
}


int main() {

	int n;
	cin>>n;
	cout<< nt(n);

	return 0;
}
