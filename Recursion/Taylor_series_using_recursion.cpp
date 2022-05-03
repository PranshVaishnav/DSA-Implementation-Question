#include<iostream>
using namespace std;

//e^x = 1+(x/1!)+(x^2/2!)+(x^3/3!)+...

float taylor_e(int x,int n)
{
        
        static double p=1;
        static double q=1;
        if(n==0)
        {
            return 1.0;
        }
        double r=taylor_e(x,n-1);
        p=p*x;
        q=q*n;
        return r+(p/q);
}

int main()
{
    cout<<taylor_e(1,10);             // x represent the e^x constant x and n represnt the number of terms to get accurate solution
}