#include<iostream>
using namespace std;

int main()
{
    char a[]="WELcOMe";
    for (int i = 0; a[i]!='\0'; i++)
    {
        if(a[i]>=65 and a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 and a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        else{
            continue;
        }
    }
    for (int i = 0; a[i]!='\0' ; i++)
    {
        cout<<a[i]<<"";
    }
    
    
}