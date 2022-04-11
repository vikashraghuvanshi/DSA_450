#include <bits/stdc++.h>  
using namespace std; 

void maximum(int arr[],int size){
    int max= arr[0];
    for(int i= 1;i<size;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<max<<endl;
}

void minimum(int arr[],int size){
    int min=arr[0];
    for(int i  =0 ;i<size;i++){
        if(arr[i]<min)
        min = arr[i];
    }
    cout<<min;
}
int main ()  
{  
   int arr[20];
   int n ;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<endl;
   maximum(arr,n);
   minimum(arr,n);
   return 0;
}  