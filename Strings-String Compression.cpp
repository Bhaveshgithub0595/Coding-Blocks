#include<iostream>
using namespace std;

int main() {
	string s1;
	cin>>s1;
	int n=s1.length();
	int i=1;
	int count=1;
	while(i<=n)
	{
		if(s1[i-1]==s1[i])
		{
			count++;
		}
		else
		{
			if(count!=1)
			{
				cout<<s1[i-1]<<count;
				count=1;
			}
			else
			{
				cout<<s1[i-1];
			}
			
		}
		i++;

	}
	return 0;
}
