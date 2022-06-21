#include<iostream>
using namespace std;
int subArraySum(int arr[],int n){
int larg=0;
for(int i=0;i<n-1;i++){
    for(int j=i;j<n;j++){
        int subSum=0;
        for(int k=i;k<j;k++){
            subSum+=arr[k];
        }
        larg=max(larg,subSum);
    }

}
return larg;
}
int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);
    cout<<subArraySum(arr,n);
     return 0;
}