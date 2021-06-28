#include<bits/stdc++.h>
using namespace std;

int length(int num)
{
    int l=1;
    while(num!=0)
    {
        num=num/10;
        l=(l*10);
    }
    cout<<l;
    return l/10;
}
int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        int l1=length(a);
        int l2=length(b);

        int x= max(a,b);
        int sum=0;
        while(x!=0)
        {
            sum=sum+(a%l1+b%l2);
            l1=l1/10;
            l2=l2/10;
            x=x/10;
        }
        cout<<sum<<endl;
    }

    return 0;
}
