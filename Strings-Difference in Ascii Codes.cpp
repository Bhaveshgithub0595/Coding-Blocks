
#include<iostream>
#include<string.h>

using namespace std;

void printstr(string str)
{
   string res= "";
   res += str[0];
   for(int i=1; i<str.length(); ++i){
       int t = str[i] - str[i-1];
       res += to_string(t);
       res += str[i];
   }
   cout << res << endl;
}
int main()
{
    string str;
    getline(cin,str);
    printstr(str);
    return 0;
}
