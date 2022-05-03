#include <iostream>
using namespace std;


double solve(double x, double n)

{
    
    static double s=1;

    if (n == 0)
    {
        return s;
    }

    s=1+(x/n)*s;
    
    return solve(x,n-1);
}

int main()
{
cout<<solve(1,10)<<endl;
}