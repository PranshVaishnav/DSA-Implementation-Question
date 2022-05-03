#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void merge(int arr[],int l,int mid,int r)
{
 auto const subArrayOneSize=mid-l+1;
 auto const subArrayTwoSize=r-mid;
 auto *leftArray=new int[subArrayOneSize];
 auto *rightArray=new int[subArrayTwoSize];
 for(auto i=0;i<subArrayOneSize;i++)
 {
     leftArray[i]=arr[l+i];
 }
 for(auto j=0;j<subArrayTwoSize;j++)
 {
     rightArray[j]=arr[mid+1+j];
 }
 auto indexOfSubArrayOne=0;
 auto indexOfSubArrayTwo=0;
 int indexOfMergedArray=l;
 while (indexOfSubArrayOne < subArrayOneSize && indexOfSubArrayTwo < subArrayTwoSize) {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
            arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOneSize) {
        arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwoSize) {
        arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }


}

void mergeSort(int arr[],int const l,int const r)
{
     if(l<r)
     {
         int mid=(l+r)/2;
         mergeSort(arr,l,mid);
         mergeSort(arr,mid+1,r);
         merge(arr,l,mid,r);
     }
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 




int main()
{
    int arr[]={10, 7, 8, 9, 1, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    cout<<"Sorted Array: \n";
    printArray(arr,n);
    return 0;
    return 0;
}