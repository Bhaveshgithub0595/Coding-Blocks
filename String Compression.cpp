#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
	int n = s1.length();
	int count = 1;
	char checker=' ';
    
	int i = 1;
	while(i<n){
		if(s1[i-1] == s1[i]){
			count++;
		}
		else{
			cout<<s1[i-1]<<count;
			count = 1;
            checker=s1[i];
		}
		i++;
	}  
    if(count>1){
        cout<<s1[n-1]<<count;
    }
    if(count==1 and checker==s1[n-1]){
        cout<<checker<<count;
    }
    if(n==1){
        cout<<s1[0]<<"1";
    }

    return 0;
}

