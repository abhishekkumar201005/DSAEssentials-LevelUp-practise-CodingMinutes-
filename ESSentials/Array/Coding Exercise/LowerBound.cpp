#include <bits/stdc++.h>
using namespace std;

// NOTE : if val is not present in array then
// Lower Bound of given integer is just smaller than integer.
//Otherwise Val itself is the anser
//if Val is less than smallest element of Array then 
//return '-1' in that case;
int lowerBound(vector<int> A, int Val)
{
    int n = A.size();

    int l = 0, r = (n - 1);

    int ans = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (A[mid] > Val)
        {
            r = mid - 1;
        }
        else
        {
            ans = A[mid];
            l = mid + 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {-1, -1, 2, 3, 5};
    int val;
    cin >> val;
    cout << lowerBound(arr, val);
    return 0;
}