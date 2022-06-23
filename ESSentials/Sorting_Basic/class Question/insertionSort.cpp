#include <iostream>
using namespace std;

int insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++){
       int key=arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=key;
    }
}
int main()
{
    int arr[] = {5,8,9,4,3,1,2};
    int n = sizeof(arr) / sizeof(int);
   insertionSort(arr, n);
   for(int x:arr){
    cout<<x<<" ";
   }
    return 0;
}