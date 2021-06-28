#include<bits/stdc++.h>
using namespace std;

void primeFactors(long long n)
{
    int sum=0,flag=0,c=0;
    while (n%2 == 0)
    {
        flag=1;
        sum++;
        n = n/2;
    }
    if(flag==1)
    {
        cout<<"2"<<"^"<<sum;
        c++;
    }

    sum=0;
    int flag1=0;
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            flag1=1;
            sum++;
            n = n/i;
        }
        if(flag1==1 && c>0)
        {
            cout<<" "<<i<<"^"<<sum;
            c++;
        }
        else if(flag1==1)
        {
            cout<<i<<"^"<<sum;
            c++;
        }

        flag1=0;sum=0;
        if(n==1 && c>1)
            cout<<endl;
    }

    if (n > 2)
    {
        if(c>0)
        {
            cout<<" "<<n<<"^1"<<endl;
            c++;
        }
        else
            cout<<n<<"^1"<<endl;

    }
    if(c==1)
        cout<<endl;
}

int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        primeFactors(n);
    }

    return 0;
}
