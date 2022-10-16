//Write a recursive function which prints the steps 
//required to solve the tower of Hanoi problem for N discs.

//Input
//1
//2
//output
//3


#include<bits/stdc++.h>
#include<cmath>

using namespace std;

void toh(int n)
{
	cout<<pow(2,n)-1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    toh(n);
    cout<<endl;
  }
}

