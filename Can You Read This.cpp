#include<iostream>
using namespace std;
int main(){
    string s;
	cin>>s;
    int n=s.size();
    int count=0;
    string val="";
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            count++;
        }
        if(count%2==0){

            cout<<val<<endl;
            val=s[i];
            count++;
        }
        else{
            val+=s[i];
        }
    }
    cout<<val;
}
