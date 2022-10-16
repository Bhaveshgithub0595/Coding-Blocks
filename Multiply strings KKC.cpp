
//Output Format
//Print the value of s1*s2 of every test case.
//
//Sample Input
//1
//33 2
//
//Sample Output
//66

#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
    string multiplyStrings(string s1, string s2) {
        string val="";
       int a=stoi(s1);
       int b=stoi(s2);
       int total=a*b;
       val=to_string(total);
       return val;
    }

int main()
{
   int t;
   cin>>t;
   while(t--){
     
       string s1;
       cin>>s1;
       string s2;
       cin>>s2;
       cout<<multiplyStrings(s1,s2);
       cout<<endl;
   }
   return 0;
}


