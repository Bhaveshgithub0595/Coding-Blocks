#include <iostream>
#include<queue>
using namespace std;

int main()
{
   int n;cin>>n;
   
   int f[n];
   int s[n];
   
   for(int i=0;i<n;i++)cin>>f[i];
   
   for(int i=0;i<n;i++)cin>>s[i];
   
   
   queue<int>q;
   
   for(int i=0;i<n;i++)q.push(f[i]);
   
   int total=0;
   
   for(int i=0;i<n;i++){
       
       int val=s[i];
       
       while(q.front()!=val){
           total++;
           int v=q.front();
           q.pop();
           q.push(v);
       }
       q.pop();
       total++;
   }
   
   cout<<total<<endl;

    return 0;
}
