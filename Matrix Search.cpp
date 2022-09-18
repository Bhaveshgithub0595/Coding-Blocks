#include<iostream>
using namespace std;

int search(int a[10][10], int n,int m, int x){
    
    if(n==0){
        return -1;
    }
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j] == x){
                cout<<"1";
                return 1;
            }
        }
    }
    
    cout<<"0";
    return 0;
}


int main() {
	int a[10][10], i,j;
    int n,m;
    cin>>n>>m;

    for(i=0;i<n;i++)    
    {    
        for(j=0;j<m;j++)    
        {    
            cin>>a[i][j];  
        }    
    } 
    // for(int i =0; i<n;i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout<<a[i][j]<<"  ";
    //     }
    //     cout<<endl;
        
    // }
    
    int x;
    cin>>x;
    
    
    search(a, n, m, x);
	return 0;
}
