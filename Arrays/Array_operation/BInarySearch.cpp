#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int a,int size,int f,int l)
{
    while(l>=f){
int mid=f+((l-f)/2);
if(arr[mid]==a)
{
    return true; 
}
else if(a<arr[mid])
{
 return BinarySearch(arr,a,size,f,mid-1);
}
else if(a>arr[mid])
{
return BinarySearch(arr,a,size,mid+1,l);
}
    }
return false;
}


int main()
{
int arr[]={4,5,8,12,25,35,48,65,96,102,503};
int a;
cout<<"Enter number to search ";
cin>>a;
int size=sizeof(arr)/sizeof(arr[0]);
cout<<BinarySearch(arr,a,size,0,size-1)<<endl;
    return 0;
}