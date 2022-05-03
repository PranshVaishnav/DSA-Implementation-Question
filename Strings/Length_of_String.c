#include <stdio.h>

int main()
{
    char s[]="Welcome";
    int i=0;
    for (i = 0; s[i]!='\0'; i++)
    {
        printf("%c - ",s[i]);
        printf("%d \n",i);

    }
    printf("%d",i);
    return 0;
    
}