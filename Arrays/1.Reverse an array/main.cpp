//using swap method:
#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArr(int arr[], int size)
{
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}

int main()
{
    int arr[]  = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArr(arr,n);
    reverseArr(arr,0,n-1);
    cout<<"Reversed array is: "<<endl;
    printArr(arr,n);
    return 0;
}


//using stls:
#include <bits/stdc++.h>  
using namespace std;  
int main ()  
{  
    // declare and initialize an array  
    int arr1[] = {34, 78, 21, 90, 5, 2};  
    int num = sizeof(arr1)/sizeof(arr1[0]);  
    reverse(arr1,arr1 + num);  
    for(int i =0 ;i<num;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;   
}  

