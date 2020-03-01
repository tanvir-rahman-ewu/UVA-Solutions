#include<bits/stdc++.h>
using namespace std;

int is_prime(int a)
{
    if(a==1)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int test_case,c=1;
    string s;

    scanf("%d",&test_case);

    while(test_case--)
    {
        map<char,int> m;
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }

        printf("Case %d: ",c);
        int t=0;
        for(map<char,int>::iterator it=m.begin();it!=m.end();it++)
        {
            int a=it->second;

            if(is_prime(a)==1)
            {
                printf("%c",it->first);
                t++;
            }
        }
        if(t==0)
        {
            printf("empty");
        }
        cout<<endl;
        c++;
    }
}
