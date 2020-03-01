#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char> v;
    vector<char> x;
    vector<int> z;
    while(getline(cin,s))
    {
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>64 && s[i]<91) ||(s[i]>96 && s[i]<123))
            {
                v.push_back(s[i]);
            }
        }
        v.push_back('0');
        int count=0;
        for(int i=0;i<v.size()-1;i++)
        {
           if(v[i]!=v[i+1])
           {
               x.push_back(v[i]);
               z.push_back(count+1);
               count=0;
           }
           else
           {
               count++;
           }
        }
        for(int i=0;i<z.size()-1;i++)
        {
            for(int j=0;j<z.size()-1;j++)
            {
                if(z[j]<z[j+1])
                {
                    swap(z[j],z[j+1]);
                    swap(x[j],x[j+1]);
                }
            }
        }
        if(z.size()==1)
        {
            cout<<x[0]<<" "<<z[0]<<endl;
        }
        else
        {
            z.push_back(0);
            for(int i=0;i<z.size()-1;i++)
            {
                if(z[i]!=z[i+1])
                {
                cout<<x[i]<<" "<<z[i]<<endl;
                break;
                }
                else
                {
                    cout<<x[i];
                }
            }
        }
        v.clear();
        x.clear();
        z.clear();
    }
}
