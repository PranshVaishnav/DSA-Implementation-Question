#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int*  riffle(int arr[],int n,int times)
{
    int *arr_new=new int[n];
      for(int i=0;i<n;i++)
       {
        if(i%2==0)
        arr_new[i/2]=arr[i];
        else
        arr_new[(n/2)+(i/2)]=arr[i];
       }
        if(times==1)
        {
                    return arr_new;
        }
       else{
           riffle(arr_new,n,times-1);
       }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}



bool isequal(int arr[],int arr_comp[],int n){
for (int i = 0; i < n ; i++)
{
    if (arr[i] != arr_comp[i])
    {
        return  false;
    }
}
return true;

}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n;
        cin>>k;
        int times=0;
        int *arr=new int[n];
        int *arr_comp=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }

        while(times<=n)
        {
            times++;
            arr_comp=riffle(arr,n,times);
            if(isequal(arr,arr_comp,n))
            {
                break;
            }
        }
        int repetition=k%times;
        // cout<<repetition<<endl;
        if(times==0)
        {
            print(arr,n);
        }
        else{
        arr=riffle(arr,n,repetition);
        print(arr,n);
        cout<<endl;
        }

    }
	return 0;
}



// int findRepetition(int arr[],int n)
// {
//     int x=0;
//     while(x<=n)
//     {
//        x++;
//        if(arr==riffle(arr,n,x))
//        {
//            cout<<"same "<< riffle(arr,n,x)<<endl;
//            break;
//        }
//        else{
//            cout<<"not same "<< riffle(arr,n,x)<<endl;
//        }
//     }
//     return x;
    
// }

