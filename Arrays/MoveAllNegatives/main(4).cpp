#include <bits/stdc++.h>
using namespace std;
void rearrange(int arr[],int n){
    int j =0;
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            if(i!=j)
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main()
{
    int arr[]={-2,4,2,-1,0,-3,-5,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
