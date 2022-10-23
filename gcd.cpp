#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

#define endl "\n"

#define tc_ll \
    lli t;    \
    cin >> t; \
    while (t--)

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int mod(int x)
{
    return x >= 0 ? x : -x;
}

// recursive algorithm for finding GCD in O(log(max(a,b))) time

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, (a % b));
}

int main()
{
    fast

        tc_ll
    {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
    return 0;
}
