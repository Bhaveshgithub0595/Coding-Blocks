#include<iostream>

using namespace std;

int main() {
	char ch[100];
	cin>>ch;

	int count[256] = {0};

	int max=0;
	char result;
	int i = 0;
	while(ch[i]!='\0'){
		count[ch[i]]++;
		if(count[ch[i]]>max){
			max = count[ch[i]];
			result = ch[i];
		}
		i++;
	}
	cout<<result;
	return 0;
}
