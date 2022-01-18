#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin>>n>>m;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];          
    }
    sort(a,a+n);   // Sorted array so we can have cheap Toffees at the start
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(m<a[i])
            break;
        m-=a[i];           // subtracting the expense from the amount till it gives a poitive value
        c++;               // counting number of Toffees bought
    }
    cout<<c;
    return 0;
}
