#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    double point,p,ans;
    vector<int> x,y;
    cout<<"Enter number of elemnet : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter x : ";
        cin>>a;
        cout<<endl;
        x.push_back(a);
        cout<<"Enter y : ";
        cin>>b;
        y.push_back(b);
        cout<<endl;
    }
    cout<<"Enter Point : ";
    cin>>point;
    p=(point-x[x.size()-1])/(x[1]-x[0]);
    vector<int> del;
    for(int i=0;i<y.size()-1;i++)
    {
        del.push_back(y[i+1]-y[i]);
    }
    int t=0;

    for(int i=del.size();i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            del.push_back(del[t+1]-del[t]);
            t++;
        }
        t++;
    }

    ans=y[n-1] + p*del[n-2] +(p*(p+1)*del[2*n-4])/2 + p*(p+1)*(p+2)*(del[3*n-7])/6;
    cout<<ans;
}

