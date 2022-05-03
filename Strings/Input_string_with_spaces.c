#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        printf("%c \n",s[i]);
    } 
}

/*For Cpp
C++ program to demonstrate getline() function

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	cout << "Please enter your name: \n";
	getline(cin, str);
	cout << "Hello, " << str
		<< " welcome to GfG !\n";

	return 0;
}
*/