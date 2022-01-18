#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int p,q,r,s;
    cin>>p>>q>>r>>s;                 // we have 2 ranges (p,q] and (r,s]
    int l1=max(p,r);                 // we have to find intersection of both the ranges
    int r1=min(q,s);                 // l1 is maximum of lower bound and r1 is minimum of upper bound
    int c=r1-l1;                     // c is no of elements in the derived range
    if(c<0)   // if the two range have no common elements 
        c=0;
    cout<<c<<"\n";
    
    
    return 0;
}
