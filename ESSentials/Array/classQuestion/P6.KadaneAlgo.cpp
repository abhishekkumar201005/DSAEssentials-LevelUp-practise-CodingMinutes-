#include <iostream>
using namespace std;
int kadane(int arr[], int n)
{
    int larg = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        larg = max(larg, currSum);
    }
    return larg;
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << kadane(arr, n);
    return 0;
}