#include <iostream>
using namespace std;
int prefixSum(int arr[], int n)
{
    // initiation
    int prefix[n] = {0};
    prefix[0] = arr[0];
    // add value on prefix array
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int larg = 0;
    // calculate sum
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subSum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            larg = max(larg, subSum);
        }
    }
    return larg;
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << prefixSum(arr, n);
    return 0;
}