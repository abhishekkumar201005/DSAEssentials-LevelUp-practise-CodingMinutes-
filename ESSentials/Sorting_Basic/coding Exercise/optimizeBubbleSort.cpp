#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> arr){
    // your code  goes here
    int n=arr.size();
   bool swapped;
   for (int i = 0; i < n-1; i++)
   {
     swapped = false;
     for (int j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(arr[j], arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped by inner loop, then break
     if (swapped == false)
        break;
   }
   
   return arr;
}
int main()
{
    vector<int>arr= {5,8,9,1,3,4,2,8,7,15,12};
   vector<int>a=optimizedBubbleSort(arr);
   for(int x:a){
    cout<<x<<" ";
   }
    return 0;
}