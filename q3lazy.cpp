#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    /*
       let the total number of complete rows be n then the 
       total number of boxes will be n*(n+1)/2 
       let the given total number of boxes be s
       s=n*(n+1)/2
       2*s=n*(n+1)
       n^2 + n -2*s =0
       the positive root of this equation will be :-
       (-1 + squareroot of (1+ 4*(2*s)))/2
       
    */
    int q,l;
    cin>>q;
    long long a[q],k;             
    for(int i=0;i<q;i++)
    {
        cin>>a[i];
        k=a[i]*8 + 1;
        l= ((int)sqrt(k) -1)/2;
        cout<<l<<"\n";
    }
    
    
    return 0;
}
