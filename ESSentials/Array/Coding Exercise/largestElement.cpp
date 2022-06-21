#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
     
}
int main(){
    vector<int>arr={-3,4,1,2,3,-9,10,58,-70};
    cout<<largestElement(arr);
    return 0;
}