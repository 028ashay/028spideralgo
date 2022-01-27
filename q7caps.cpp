#include <bits/stdc++.h>
using namespace std;

int sum = 0;

void traverse(vector<int> a, vector<int> &r, int i, int d, int &sum)
{

    r.push_back(a[i]);
    sum += a[i];

    if (sum == d && a[i * 2 + 1] < 0 && a[i * 2 + 2] < 0)
    {
        for (auto x : r)
            cout << x << " ";
        cout << endl;
    }

    if (a[i * 2 + 1] >= 0)
    {
        traverse(a, r, i * 2 + 1, d, sum);
        sum -= a[i * 2 + 1];
        r.pop_back();
    }

    if (a[i * 2 + 2] >= 0)
    {

        traverse(a, r, i * 2 + 2, d, sum);
        sum -= a[i * 2 + 2];
        r.pop_back();
    }
}
int main()
{
    int n, d, t, k = 0, sum = 0;
    vector<int> r, a(30009, -2);
    cin >> n;
    int i = 0;
    while (1)
    {

        cin >> t;
        while (a[i] == -1)
            i++;
        a[i] = t;
        if (t > 0)
            k++;
        else
        {
            a[i * 2 + 1] = -1;
            a[i * 2 + 2] = -1;
        }
        if (k == n + 1)
        {
            d = t;
            a[i] = -1;
            break;
        }
        i++;
    }
    traverse(a, r, 0, d, sum);
    return 0;
}