#include <bits/stdc++.h>
using namespace std;
int arrSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int kadaneAlgo(int arr[], int n)
{
    int maxSubArrSum = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        maxSubArrSum = max(maxSubArrSum, curr);

        if (curr < 0)
        {
            curr = 0;
        }
    }
    return maxSubArrSum;
}

int revKadaneAlgo(int arr[], int n)
{
    int minSubArrSum = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        minSubArrSum = min(minSubArrSum, curr);

        if (curr >= 0)
        {
            curr = 0;
        }
    }
    return minSubArrSum;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxSubSum = kadaneAlgo(arr, n);
        int maxCirSum = arrSum(arr, n) - revKadaneAlgo(arr, n);
 cout << max(maxSubSum, maxCirSum) << endl;
    }

    return 0;
}
