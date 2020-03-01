#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100][100];
    vector<int> v;
    vector<int> w;
    while(scanf("%d",&n)==1 && n!=0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int sum1=0;
            for(int j=0;j<n;j++)
            {
                sum=sum+a[j][i];
                sum1=sum1+a[i][j];
            }
            v.push_back(sum);
            w.push_back(sum1);
        }
        int count=0;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(w[i]%2==0)
            {
                continue;
            }
            else
            {
                count1++;
            }
        }
        if(count==0 && count1==0)
        {
            printf("OK\n");
        }
        else if(count>1 || count1>1)
        {
            printf("Corrupt\n");
        }
        else if(count==1 && count1==1)
        {
            int t1,t2;
            for(int i=0;i<n;i++)
            {
                if((v[i]%2)!=0)
                {
                    t1=i+1;
                }
            }
            for(int i=0;i<n;i++)
            {
                if((w[i]%2)!=0)
                {
                    t2=i+1;
                }
            }
            printf("Change bit (%d,%d)\n",t2,t1);
        }
        v.clear();
        w.clear();
    }
    return 0;
}
