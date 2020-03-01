#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    vector<int> v;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[j]<v[j+1])
            {
                int t;
                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
