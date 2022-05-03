/* Priyanshu Vaishnav */
#include <bits/stdc++.h>


long long int count;
long long int count_slow;

long long int power_eff(long long int m, long long int n)
{
    count=0;
    if (n == 0)
    {
        count++;
        return 1;
    }
    
    if(n%2==0)
    {   count++;
        return power_eff(m*m, n/2);
    }
    else {
        count++;
        return power_eff(m*m, n/2)*m;
    }
    
    
}


long long int power_r(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    count_slow++;
    return power_r(m, n - 1) * m;
}

signed main()
{

    std::ios_base::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    std::cout << std::fixed << std::setprecision(12);
    std::cout << power_r(9, 18)<<std::endl;
    std::cout << power_eff(9, 18)<<std::endl;
    std::cout<<count<<std::endl;
    std::cout<<count_slow<<std::endl;
    return 0;
}