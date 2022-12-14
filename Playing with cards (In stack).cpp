#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void sieve(vector<bool>&primes,int m){
    
    primes[0]=false;
    primes[1]=false;
    
    for(int i=2;i*i<=m;i++){
        if(primes[i]){
            for(int j=i*i;j<=m;j+=i){
                primes[j]=false;
            }
        }
    }
}
int main()
{
    
     int n,q;
    cin >> n >> q;
    int size = q+1;
    stack<int> a[size];
    stack<int> b[size];
    while(n--){
        int x;
        cin >> x;
        a[0].push(x);
    }
    
    int m=100000;
    vector<bool>primes(m,true);
    
    sieve(primes,m);
    
    unordered_map<int,int>mp;
    
    int c=0;
    
    for(int i=0;i<m && c<q;i++){
        
        if(primes[i]){
            c++;
            mp[c]=i;
        }
    }
    
    
    
    int i=1;
    while(q--){
        while(!a[i-1].empty()){
            int topElement = a[i-1].top();
            a[i-1].pop();
            if(topElement % mp[i] == 0){
                b[i].push(topElement);
            }
            else {
                a[i].push(topElement);
            }
        }
        i++;
    }
    for(int i=0;i<size;i++){
        while(!b[i].empty()){
            cout << b[i].top() << endl;
            b[i].pop();
        }
    }
    for(int i=0;i<size;i++){
        while(!a[i].empty()){
            cout << a[i].top() << endl;
            a[i].pop();
        }
    }
  

    return 0;
}
