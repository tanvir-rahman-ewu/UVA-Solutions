#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    vector<int> v;
    int c=1;
    while(scanf("%lld",&a)==1)
    {
        int i=1;
        while(a!=0)
        {
            if(i==2 || i==6)
            {
                v.push_back(a%10);
                a=a/10;
            }
            else
            {
                v.push_back(a%100);
                a=a/100;
            }
            i++;
        }

        int s=v.size();
        cout<<" "<<c<<"."<<" ";
        c++;
        while(s!=0)
        {
            if(s==9)
            {
                cout<<v[s-1]<<"kuti";
            }
            else if(s==8)
            {
                cout<<v[s-1]<<"lakh";
            }
            else if(s==7)
            {
                cout<<v[s-1]<<"hajar";
            }
            else if(s==6)
            {
                cout<<v[s-1]<<"shata";
            }
            else if(s==5)
            {
                cout<<v[s-1]<<"kuti";
            }
            else if(s==4)
            {
                cout<<v[s-1]<<"lakh";
            }
            else if(s==3)
            {
                cout<<v[s-1]<<"hajar";
            }
            else if(s==2)
            {
                cout<<v[s-1]<<"shata";
            }
            else if(s==1)
            {
                cout<<v[s-1];
            }
            s--;
        }
        cout<<endl;
        v.clear();
    }
}
