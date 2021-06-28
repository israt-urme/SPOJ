#include<bits/stdc++.h>
using namespace std;

long long n=100;
vector<long long>a;

void sieve()
{
    long long i,j;
    a[1]=1;
    for(i=4;i<=n;i=i+2)
        a[i]=1;
    for(i=3;i*i<=n;i=i+2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=n;j=j+i)
                a[j]=1;
        }
    }
}

int main()
{
    sieve();
    int i,t;
    long long p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>p;
        if(a[p]==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
