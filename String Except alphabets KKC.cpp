//INPUT FORMAT
//The first line of input contains a single integer T denoting the number of test cases. 
//The first line of each test case contains a string s.
//
//OUTPUT FORMAT
//Print the string after removing non alphabet character.
//
//SAMPLE INPUT
//1
//www.google.com
//
//SAMPLE OUTPUT	
//www google com



#include <iostream>
using namespace std;
string OnlyAlphabet(string line){
    int len = line.size();
    for(int i=0;i<len;++i)
    {
        if (!((line[i]>='a' && line[i]<='z') || (line[i]>='A' && line[i] <='Z')))
        {
            line[i]=' ';
        }
    }
    return line;
}
int main()
{
 int t;
    cin>>t;
    while(t--){
    string line;
    cin>>line;
    cout<<OnlyAlphabet(line);
    cout<<endl;
    }
    return 0;
}

