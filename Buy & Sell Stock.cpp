#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        
        int max1 = 0;
        int min1 = INT_MAX;
        
        for(int i = 0; i<prices.size(); i++){
            min1 = min(min1, prices[i]);
            int min2 = prices[i] - min1;
            max1 = max(max1, min2);
        }
        
        return max1;
    } 

int main() {

	int n;
	cin>>n;

	vector<int> prices;
	
	for(int i = 0; i < n; ++i){
		int x;
		cin>> x;
		prices.push_back(x);
	}

	cout << maxProfit(prices);
	return 0;
}
