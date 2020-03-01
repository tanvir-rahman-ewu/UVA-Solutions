#include<bits/stdc++.h>
using namespace std;
#define f_size 100000
#define p_size 100000

bool flag[f_size];
int p[p_size];
int prime()
{
    int value=sqrt(f_size)+1;
    for(int i=2;i<=f_size;i++)
    {
        flag[i]=1;
    }
    for(int i=2;i<value;i++)
    {
        if(flag[i])
        {
            for(int j=i;j*i<=f_size;j++)
            {
                flag[i*j]=0;
            }
        }
    }
    int total=0;
    for(int i=2;i<=f_size;i++)
    {
        if(flag[i])
        {
            p[total++]=i;
        }
    }
    return total;
}
int divisor(int a)
{
    int val,count=0,sum=1;
    val=sqrt(a)+1;
    for(int i=0;p[i]<val;i++)
    {
        if(a%p[i]==0)
        {
            count=0;
            while(a%p[i]==0)
            {
                a=a/p[i];
                cout<<p[i]<<"    ";
                count++;
            }
            sum=sum*(count+1);
        }
    }
    if(a>1)
    {
        sum=sum*2;
    }
    return sum;

}
int main()
{
    int s=prime();
    cout<<divisor(319444);
    /*
    int low,up;
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int max=0;
        int num;
        scanf("%d %d",&low,&up);
        for(long long int i=low;i<=up;i++)
        {
            if(divisor(i)>max)
            {
                max=divisor(i);
                num=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",low,up,num,max);
    }*/
}


