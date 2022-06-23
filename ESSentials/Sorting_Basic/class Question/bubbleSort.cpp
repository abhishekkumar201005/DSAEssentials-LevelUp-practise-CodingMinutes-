#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[] = {5,8,9,1,3,4,2,8,7,15,12};
    int n = sizeof(arr) / sizeof(int);
   bubbleSort(arr, n);
   for(int x:arr){
    cout<<x<<" ";
   }
    return 0;
}