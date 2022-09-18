#include<iostream>
using namespace std;

void even(int i,int n){
    //int num=n;
    if(i==n+1)
    {
        return;
    }
    if(i%2==0)
    {
        cout<<i<<endl;
    }
    even(i+1,n);
}

void odd(int n){
    if(n==0){
        return;
    }
    if(n%2==1){
       cout<<n<<endl;
    //    odd(n-1);
    }
    odd(n-1);
}

int main(){
    int n;
    cin>>n;
    odd(n);
    even(1,n);

    return 0;
}
