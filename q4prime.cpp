#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x;
    vector<int> v;
    cin>>n>>x;
    for(int i=2;i<=n;i++)
    {
        int k=(int)sqrt(i),temp=1;
        for(int j=2;j<=k;j++)
        {
            if (i%j==0)
            {
                temp=0;
                break;
            }
        }
        if(temp)
            v.emplace_back(i); // Storing all prime numbers from 1 to n
    }
    int f;
    for(int i=0;i<v.size()-1;i++)
    {
        
      f= (v[i]+v[i+1]+1);           // required prime number
        auto it=find(v.begin(),v.end(),f);
            if(it!=v.end())
                x--;        // counting how many such prime numbers are there in [2,n] until it met our requirement 
            if(x<=0)
                break;
    }
    if (x<=0)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    
    
    return 0;
}
