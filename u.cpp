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
    cout<<prime[prime.size()-1];
}
void factorial( long long int n)
{
    int j=1;
   long long int k = prime.size();
    for(long long int i=0; i<k && n!=1; i++)
    {
        if(n%prime[i]==0)
        {

            while(n%prime[i]==0)
            {

                n= n/prime[i];
                if(prime[i]>j){
                     j=prime[i];
                factor.push_back(prime[i]);

                }
            }
        }
    }
    if(n>1)
        factor.push_back(n);

}
int main()
{
   sieve();
   long long int n,m;
   while(scanf("%lld",&n)==1)
   {
       if(n==0)
        break;
       if(n<0)
       {
           n=-1*n;
       }
       factorial(n);
       if(factor.size()>1)
       printf("%lld\n",factor[factor.size()-1]);
       else
        printf("-1\n");
       factor.clear();
   }


}

