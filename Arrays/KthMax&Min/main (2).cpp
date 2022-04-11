#include <bits/stdc++.h>  
using namespace std; 

int kthsmallest(int arr[],int k){
    return arr[k-1];
}

int kthlargest(int arr[],int k, int n){
    return arr[n-k];
}

int main ()  
{  
   int arr[]={2,4,8,1,7,11,6};
   int num = sizeof(arr)/sizeof(arr[0]);
   int k;
   cin>>k;
   sort(arr,arr+num);
   cout<<kthsmallest(arr,k);
   cout<<endl;
   cout<<kthlargest(arr,k,num);
  return 0;
}  