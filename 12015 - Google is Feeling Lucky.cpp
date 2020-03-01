#include<bits/stdc++.h>
using namespace std;

struct a
{
    string s;
    int b;
};

int main()
{
    int test_case,n,c=1;

    string x;

    scanf("%d",&test_case);

    while(test_case--)
    {
        vector<a> v;

        int max=0;

        for(int i=0;i<10;i++)
        {
            cin>>x>>n;

            if(n>max)
            {
                max=n;
            }

            a temp;

            temp.s=x;
            temp.b=n;

            v.push_back(temp);
        }

        cout<<"Case #"<<c<<":"<<endl;

        for(int i=0;i<10;i++)
        {
            if(v[i].b==max)
            {
                cout<<v[i].s<<endl;
            }
        }
        c++;
    }
}
