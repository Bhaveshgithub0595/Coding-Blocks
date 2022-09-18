#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	
	int start = 0 ;
	int end = size-1;
	
	int mid = start + (end-start)/2; // (start + end)/2 
	
	while(start <= end){
		
		if(arr[mid] == key){
			return mid;
		}
		
		//go to right wala part
		if(key > arr[mid]) {
			start = mid + 1;
		}
		else{ // key < arr[mid]
			end = mid -1;
		}
		
		mid = start + (end - start)/2;
	}
	
	return -1;
}


int main(){
	
	int n;
	cin >> n;

	int arr[n];

	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	
	cout << binarySearch(arr , n , k);
	
	return 0;
	
}
