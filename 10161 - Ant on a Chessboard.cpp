#include<bits/stdc++.h>
using namespace std;
long long int sqr(long long int a)
{
    long long int t;
    t=sqrt(a);
    if(t*t==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    long long int n,t;
    while(scanf("%lld",&n)==1 && n!=0)
    {

        t=n;
        if(sqr(n)==1)
        {
            if(n%2==0)
            {
                cout<<sqrt(n)<<" "<<"1"<<endl;
            }
            else
            {
                cout<<"1"<<" "<<sqrt(n)<<endl;
            }
        }
        else
        {
            while(1)
            {
                if(sqr(t)==1)
                {
                    break;
                }
                else
                {
                    t--;
                }
            }
            int temp=sqrt(t)+1;
            int temp2=t;
            int count1=0;
            int count2=0;
            int c=0;
            if(t%2==0)
            {
                while(temp2!=n)
                {

                    if(count1<temp)
                    {
                        c++;
                        count1++;
                        count2++;
                    }
                    else if(count1==temp)
                    {
                        c--;
                        count2=temp;
                    }
                    temp2++;

                }
                if(count1<temp)
                {
                    cout<<sqrt(t)+1<<" "<<count2<<endl;
                }
            else
            {
                cout<<c<<" "<<count2<<endl;
            }
        }
            else
            {
                while(temp2!=n)
                {

                    if(count2<temp)
                    {
                        c++;
                        count2++;
                        count1++;
                    }
                    else if(count2==temp)
                    {
                        c--;
                        count1=temp;
                    }
                    temp2++;

                }
            if(count1<temp)
            {
                cout<<count2<<" "<<sqrt(t)+1<<endl;
            }
            else
            {
                cout<<count2<<" "<<c<<endl;
            }
            }

        }
        }
}
