#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.length(), l2 = s2.length();
        if (l1 > l2)
            cout << "NO\n";
        else if (s1 == s2)
            cout << "YES\n";
        else
        {
            int i = 0, j, f = 0;
            for (j = 0; j < l2; j++)
            {
                if (i < l1 && s1[i] == s2[j])
                    i++;
                else if (s1[i - 1] != s2[j])
                {
                    f = -1;
                    break;
                }
            }
            if (f != -1 && i == l1)
                f = 1;
            if (f > 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
