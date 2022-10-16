
*       *

**     **

***   ***

**** ****

*********




#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
 
        for(int j=1;j<=(n-i)*2-1;j++){
            
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==n){
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
    }
   return 0;
}

#include<iostream>
using namespace std;
int main() {
	int n;
    cin>>n;
    for(int i=1;i<=n+1;i++)
    {
        int k=n;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k--;
        }
        for(int s=2*n-i;s>=i;s--)
        {
            cout<<"   ";
        }
        int l=n-i+1;
        int x=1;
        for(int j=1;j<=i;j++)
        {
            if(l!=0)
            {
               cout<<l<<" ";
               l++;
            }
            else{
                while(j<=n)
                {cout<<x<<" ";
                x++;
                j++;}
            }
        }
        cout<<endl;
    }
    
	return 0;
}
