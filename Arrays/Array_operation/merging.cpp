#include<iostream>
using namespace std;

int* merge(int arr1[],int arr2[])
{
int *arr=new int[sizeof(int)*10];
for(int i=0;i<10;i++)
{
if(i<5)
{
    arr[i]=arr1[i];
}
else{
    arr[i]=arr2[i-5];
}
}


return arr;
}
 
int main()
{
    int arr1[5]={1,2,4,6,9};
    int arr2[5]={3,5,7,8,10};
    int *final=merge(arr1,arr2);
    for(int j=0;j<10;j++)
    {
        cout<<*final<<endl;
        final++;
    }
}
