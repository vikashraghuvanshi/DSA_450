#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[]= {0,2,1,0,1,2,1,2,0,1,0};
   int n = sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
