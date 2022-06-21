#include<iostream>
using namespace std;
void aReverse(int arr[],int n){
    int start=0,end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 12, 31, 54};
    int n = sizeof(arr) / sizeof(int);
    aReverse(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}