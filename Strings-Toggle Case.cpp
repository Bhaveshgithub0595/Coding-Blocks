#include<iostream>
#include<cstring>
using namespace std;

void toggle(char a[]){
	for(int i = 0; a[i] != '\0'; i++){
		if(a[i]<'a'){
			char x = a[i] +32;
			cout<<x;
		}
		else if(a[i] >= 'a'){
			char x = a[i] - 32;
			cout<<x;
		}
	}
}
int main() {
	char a[1000];
	cin>>a;

	toggle(a);

	cout<<endl;
	return 0;
}
