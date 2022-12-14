#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void subseq(string s,vector<string> &ans,int i,string temp){
    if(s[i]=='\0'){
        ans.push_back(temp);
        return;
    }

    subseq(s,ans,i+1,temp);
    temp += s[i];
    subseq(s,ans,i+1,temp);
}

int main() {

	int t;
	cin >> t;

	while(t--){
    string s;
    cin >> s;

    vector<string> ans;

    subseq(s,ans,0,"");

    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout << i <<endl;
    }   
	}

}

