#include<bits/stdc++.h>
using namespace std;
int is_prime(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n,c,i;
    vector<int> prime;
    vector<int> a;
    vector<int> b;
    while(scanf("%d %d",&n,&c)==2)
    {
        int count=0;
        for(i=1;i<=n;i++)
        {
            if(is_prime(i)==1)
            {
                count++;
                prime.push_back(i);
            }
        }

        if(c*2>count)
        {
            printf("%d %d: ",n,c);
            for(i=0;i<prime.size();i++)
            {
                if(i<prime.size()-1)
                printf("%d ",prime[i]);
                else
                    printf("%d",prime[i]);
            }
        }
        else if(count%2==0)
        {
            printf("%d %d: ",n,c);
            for(i=0;i<prime.size();i++)
            {
                if(i<prime.size()/2)
                {
                    a.push_back(prime[i]);
                }
                else
                {
                    b.push_back(prime[i]);
                }
            }
            int r=a.size()-c;
            for(i=r;i<=a.size()-1;i++)
            {

                printf("%d ",a[i]);
            }
            for(i=0;i<c;i++)
            {
                if(i<c-1)
                printf("%d ",b[i]);
                else
                    printf("%d",b[i]);
            }
        }
        else if(count%2!=0)
        {
            int mid=((count+1)/2)-1;
            int low=mid-(2*c-1)/2;
            int r=low+(2*c-1);
            printf("%d %d: ",n,c);
            for(i=low;i<r;i++)
            {
                if(i<r-1)
                printf("%d ",prime[i]);
                else
                    printf("%d",prime[i]);
            }
        }
        printf("\n\n");
        prime.clear();
        a.clear();
        b.clear();
    }
}
