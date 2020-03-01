#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    int mul=1;
    for(int i=0;i<b;i++)
    {
        mul=mul*a;
    }
    return mul;
}
int main()
{
    int a,b;
    vector<int> one;
    vector<int> two;
    while(scanf("%d %d",&a,&b)==2)
    {
        while(a!=0)
        {
            one.push_back(a%2);
            a=a/2;
        }
        while(b!=0)
        {
            two.push_back(b%2);
            b=b/2;
        }
        vector<int> r1;
        vector<int> r2;
        for(int i=one.size()-1;i>=0;i--)
        {
            r1.push_back(one[i]);
        }
        for(int i=two.size()-1;i>=0;i--)
        {
            r2.push_back(two[i]);
        }
        //one.reverse(one.begin(),one.end());
        //two.reverse(two.begin(),two.end());
        while(r1.size()!=r2.size())
        {
            if(r1.size()<r2.size())
            {
                r1.insert(r1.begin(),0);
            }
            else
            {
                r2.insert(r2.begin(),0);
            }
        }
        vector<int> v;
       for(int i=0;i<r1.size();i++)
       {
           if(r1[i]==r2[i])
           {
               v.push_back(0);
           }
           else
           {
               v.push_back(1);
           }
       }
       int sum=0;
       int c=0;
       for(int i=v.size()-1;i>=0;i--)
       {
           sum=sum + (v[i]*power(2,c));
           c++;
       }
       printf("%d\n",sum);
       v.clear();
       one.clear();
       two.clear();
       r1.clear();
       r2.clear();
    }
}
