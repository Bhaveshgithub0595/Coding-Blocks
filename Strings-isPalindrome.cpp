#include<bits/stdc++.h>

using namespace std;

//upper case to lower case

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }
}

//palindrome in a string
bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;
    

    while(s<=e){
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getlength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++  ){
        count ++;
    }
    return count;
}
int main() {

	char name[20];
    
    cin>> name;
    
    int len = getlength(name);
	//cout<<"Length "<< getlength(name)<<endl;
    //cout<< "Your name is ";
    //cout<<name<<endl;

    
	//cout << checkPalindrome(name, len)<<endl;
	if (checkPalindrome(name, len))
     cout << "true";
   else
     cout << "false";
    
	return 0;
}
