#include<bits/stdc++.h>
using namespace std;

#define size_n 100
#define size_p 100

bool flag[size_n+5];
int prime[size_p+5];

int seive()
{
    int val=sqrt(size_n)+1;
    int total=0;
    for(int i=2;i<size_n;i++)
    {
        flag[i]=1;
    }
    for(int i=2;i<val;i++)
    {
       if(flag[i])
       {
           for(int j=i;j*i<=size_n;j++)
           {
               flag[i*j]=0;
           }
       }
    }
    for(int i=2;i<=size_n;i++)
    {
        if(flag[i])
        {
            prime[total++]=i;
        }
    }
    return total;
}
void factor(int n)
{
    int a[100];
    int t=n;
    for(int i=0;i<=100;i++)
    {
        a[i]=0;
    }
    int max=0;
    for(int i=2;i<=n;i++)
    {

        int val=sqrt(i)+1;
        int num=i;
        for(int j=0;prime[j]<=val;j++)
        {
            if(num%prime[j]==0)
            {
                while(num%prime[j]==0)
                {
                    a[prime[j]]++;
                    num=num/prime[j];
                    if(prime[i]>max)
                    {
                        max=prime[i];
                    }
                }
            }
        }
        if(num>1)
        {
            a[num]++;
            max=n;
        }
    }
    cout<<setw(3)<<t<<"! =";
    vector<int> v;
    for(int i=2;i<100;i++)
    {
        if(a[i]!=0)
        {
            v.push_back(a[i]);
        }
    }
    if(v.size()<16)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<setw(3)<<v[i];
        }
    }
    else
    {
        for(int i=0;i<15;i++)
        {
            cout<<setw(3)<<v[i];
        }
        cout<<endl<<"      ";
        for(int i=15;i<v.size();i++)
        {
            cout<<setw(3)<<v[i];
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    int t=seive();
    while(scanf("%d",&n) && n!=0)
    {
        factor(n);
    }
}
