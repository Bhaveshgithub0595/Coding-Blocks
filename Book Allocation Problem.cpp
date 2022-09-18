#include<iostream>
using namespace std;
bool possible(int arr[], int n, int std, int mid)
{
	int student_count=1;
	int total_pages=0;
	for(int i=0; i<n;i++)
	{
		if(total_pages+arr[i]<=mid){
			total_pages+=arr[i];
		}
		else{
			student_count++;
			total_pages=arr[i];
			if(student_count>std || arr[i]>mid)
			return false;
		}
		
}
return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;     ////size of arraay  book count
		int std; /////////////student
		cin>>n>>std;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int s=0 , sum=0; 
		for(int i=0; i<n;i++){
			sum+=arr[i];
		}
		int e=sum;
		int ans=-1;
		while(s<=e)
		{
			int mid=s+(e-s)/2;
			if(possible(arr,n,std,mid)){
				ans=mid;
				e=mid-1;
			}
			else
			s=mid+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
