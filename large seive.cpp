#include<cstdio>
#include<cmath>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
unsigned long long int  arr[100000000];
long long int divisor =1,fact[1000000];
vector<unsigned long long int>prime;
vector< long long int>factor;

void sieve()
{
    unsigned long long int N= 10001000;
    unsigned long long int k = N;
    for(unsigned long long int i=3; i<=k; i+=2)
    {
        if(arr[i]==0)
        {
            for(unsigned long long int j=i*i; j<=N; j+=2*i)
            {
                arr[j] = 1;
            }
        }
    }
    arr[1] = 1;
    for(unsigned long long int i=4; i<=N; i+=2)
    {
        arr[i] = 1;
    }

    prime.push_back(2);
    for(unsigned long long int i=3; i<=N; i+=2)
    {
        if(arr[i]==0)
            prime.push_back(i);
    }
}
int main()
{
    sieve();
    cout<<prime[prime.size()-1];
}
