#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;

    while(cin>>a)
    {
        cin>>b;
        int x=0,y=0,l1,l2;

        l1=a.length();
        l2=b.length();

        for(int i=0;i<l2;i++)
        {
            if(a[x]==b[i])
            {
                x++;
                y++;
            }
        }

        if(y==l1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
