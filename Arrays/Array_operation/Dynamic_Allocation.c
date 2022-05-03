#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamic Allocation
    int *p;
    p = (int *)malloc(sizeof(int) * 5);
    p[0] =1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    //Resizing pointer to array of size 5 to size of 10
    int *q=(int*)malloc(sizeof(int)*10);
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    free(q);
    q=NULL;
    printf("%d", p[2]);


}