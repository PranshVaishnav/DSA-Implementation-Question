#include<stdio.h>

int main()
{
int a[6]={0,1,2,3,4,5};
int *p;
p=a;
printf("%i",*p);
p=p+1;
printf("%i",*p+1);

}