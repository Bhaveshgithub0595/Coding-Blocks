#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

char st=97;
void codes(vector<string> &ans,int n,string temp){
	if(n==0){
		ans.push_back(temp);
		return;
	}

	int ele = n%10;
	char ch = st+ele-1; //97+5-1 = 'e'
	// temp = ch+temp
	codes(ans,n/10,ch+temp);

	if(n>9){ //mtlb ha singles ke liye check kar chuke hain ab doubles ke liye
		int dob = n%100;
		if(dob>0 && dob<27){
			char ch1 = st+dob-1;
			// temp = ch1+temp
			codes(ans,n/100,ch1+temp);
		}
	}
}

int main() {
	int n;
	cin >> n;

	vector<string> ans;
	codes(ans,n,"");
	
	sort(ans.begin(),ans.end());

	cout << "[";
	int i=0;
	for( ;i<ans.size()-1;i++){
		cout << ans[i]<<", ";
	}
	cout <<ans[i]<<"]";
}
