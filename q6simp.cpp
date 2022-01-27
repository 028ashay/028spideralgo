#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

bool calculate(ll a[], ll i, ll d, ll n, ll r)
{

    if (r == d)
        return true;
    if (i == n)
        return false;
    if (calculate(a, i + 1, d, n, r + a[i]))
        return true;
    if (calculate(a, i + 1, d, n, r - a[i]))
        return true;
    if (calculate(a, i + 1, d, n, r * a[i]))
        return true;
    if (calculate(a, i + 1, d, n, r / a[i]))
        return true;

    return false;
}

int main()
{
    ll n, d, r, tt;
    cin >> tt;
    while (tt--)
    {
        cin >> n >> d;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        r = a[0];

        if (calculate(a, 1, d, n, r))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}