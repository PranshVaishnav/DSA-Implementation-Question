/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

// using loop

int fibonacci_l(int n)
{

    if (n <= 1)
    {
        return n;
    }
     int t0=0;
     int t1=1;
     int s=0;
    for (int i = 2; i <= n; i++)
    {
        s=t0+t1;;
        t0=t1;
        t1=s;
    }
    return s;
}

int F[100];

int fibonacci_e(int n)
{
    if (F[n] == -1 and n == 0)
    {
        F[n] = 0;
        return 0;
    }
    if (F[n] == -1 and n == 1)
    {
        F[n] = 1;
        return 1;
    }

    if (F[n - 1] == -1)
    {
        F[n - 1] = fibonacci_e(n-1);
    }
    if (F[n - 2] == -1)
    {
        F[n - 2] = fibonacci_e(n - 2);
    }

    return F[n - 1] + F[n - 2];
}

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    fill(F, F + 100, -1);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cout << fibonacci(18) << endl;
    cout << fibonacci_l(18) << endl;
    cout << fibonacci_e(18) << endl;
}