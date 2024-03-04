/*
https://codebreaker.xyz/problem/exponentiate
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll power_mod(ll a, ll b, ll c)
{
    long long result = 1;

    while(b != 0) {

        if (b % 2 == 0) { // even

            a *= a;  // change a to a^2
            a %= c;  // immediately mod c

            b /= 2;

        }
        else { // odd

            result *= a; // if b is odd, take out one a, times it into result
            result %= c; // immediately mod c

            b -= 1;
        }
    }

    return result;
}




int main()
{

    freopen("0730.txt", "r", stdin);

    int tc_count; 
    scanf("%d", &tc_count);

    while (tc_count--)
    {
        ll a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        ll result = power_mod(a, b, c);

        //print result:
        printf("%lld\n", result);
    }

    return 0;
}