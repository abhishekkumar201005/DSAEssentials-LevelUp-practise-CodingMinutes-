#include <iostream>
using namespace std;

void lSearch(int arr[], int n, int key)
{
    // traverse array
    for (int i = 0; i < n; i++)
    {
        //check element
        if (arr[i] == key)
        {
            cout << "Element found ";
        }
    }
    //out of loop
    cout << "Not found";
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 12, 31, 54};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    lSearch(arr, n, key);
    return 0;
}