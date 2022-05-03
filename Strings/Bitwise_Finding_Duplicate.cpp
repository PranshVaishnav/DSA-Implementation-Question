/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s = "Hellohowareyou";
    long int H = 0, x = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        x = 1;
        x = x << (s[i] - 97);
        if ((x & H) > 0)                 //Bit Masking
        {
            cout<<(x&H)<<endl;
            printf("%c", s[i]); 
        } 
        else
            H = x | H;                   //Bit Merging
    }

    return 0;
}