#include<iostream>
using namespace std;

int bSearch(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        //conditions
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 12, 31, 54};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    cout<<bSearch(arr,n,key);
    return 0;
}