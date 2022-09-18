#include<iostream>
#include<cstring>
using namespace std;

int main() {

	string s;
	cin>>s;
	int n = s.length();
	for(int i = 0; i<n ; i++){
		if(i%2==0){
			char x = s[i]+1;
			cout<<x;
		}
		else{
			char y=s[i]-1;
			cout<<y;

		}
	}
	return 0;
}
