#include <bits/stdc++.h>
#include<string>
using namespace std;
 


int main()
{
   string s;
   cin>>s;
   int n = s.length();
   int i = 1;
   int count = 1; 
   for(int i =1; i<=n; i++)
   {
	   if(s[i-1]==s[i]){
		   count++;

	   }
	   else{
		   cout<<s[i-1];
		   count = 1;
	   }
   }
   return 0;
}
