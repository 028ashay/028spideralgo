#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll n;
    cin >> n;
    ll c = 0, u = 1, d = 0, p = 0;
    while (n--)
    {
        d = u * 3;
        d += p;
        c = u;
        c += p * 3;
        u = d % 1000000007;
        p = c % 1000000007;
    }
    cout << u;
    return 0;
}
