//Original Method:
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

//Using STLs:
#include <bits/stdc++.h>  
using namespace std; 
int main ()  
{  
   int arr[]={2,4,8,4,2,8,6};
   int num = sizeof(arr)/sizeof(arr[0]);
   cout<<"Maximum element is: "<<*max_element(arr,arr+num)<<endl;
   cout<<"Minimum element is: "<<*min_element(arr,arr+num);
   return 0;
}  
