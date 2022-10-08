#include <bits/stdc++.h>
using namespace std;
void printNextGreaterElement(int nums[],int n){
  stack<int> s;
    int res[n];
    for (int i = 2 * n - 1; i >= 0; i--)
    {

        while (!s.empty() && nums[s.top()] <= nums[i % n])
        {
            s.pop();
        }

        res[i % n] = (s.empty() ? -1 : nums[s.top()]);
        s.push(i % n);
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
}
int main()
{
  
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++)
      cin>>arr[i];
    printNextGreaterElement(arr,n);
    
  return 0;
}

