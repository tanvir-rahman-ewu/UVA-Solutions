#include<bits/stdc++.h>
using namespace std;

#define size_n 1000000
#define size_p 1000000

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

int main()
{
    int total=seive();
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int l,u,temp=0,c=0;
        map<int,int> m;
        scanf("%d %d",&l,&u);
        for(int i=l;i<=u;i++)
        {
            if(c==0 && flag[i])
            {
                c++;
                temp=i;
            }
            else if(flag[i])
            {
                m[i-temp]++;
                temp=i;
            }
        }
        vector<int> v;
        int index,max=0;
        for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
        {
            v.push_back(it->second);
            if(it->second>max)
            {
                max=it->second;
                index=it->first;
            }
        }
        if(max==0)
        {
            printf("No jumping champion\n");
        }
        else
        {
            int c=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==max)
                {
                    c++;
                }
            }
            if(c>1)
            {
                printf("No jumping champion\n");
            }
            else
            {
                printf("The jumping champion is %d\n",index);
            }
        }
    }
}
