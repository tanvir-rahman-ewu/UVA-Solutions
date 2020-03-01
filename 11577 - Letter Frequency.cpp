#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    string s;
    vector<char> v;
    vector<char> w;
    vector<int> a;
    scanf("%d",&test_case);
    getchar();
    while(test_case--)
    {
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>64 &&s[i]<91) || (s[i]>96 &&s[i]<123))
            {
                if(s[i]>64 &&s[i]<91)
                {
                    s[i]=s[i]+32;
                }
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        v.push_back('0');
        int count=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            {
                w.push_back(v[i]);
                a.push_back(count+1);
                count=0;
            }
            else
            {
                count++;
            }
        }

        for(int i=0;i<a.size()-1;i++)
        {
            for(int j=0;j<a.size()-1;j++)
            {
                if(a[j]<a[j+1])
                {
                    swap(a[j],a[j+1]);
                    swap(w[j],w[j+1]);
                }
            }
        }
        if(a.size()==1)
        {
            cout<<w[0]<<endl;
        }
        else
        {
            a.push_back(0);
            for(int i=0;i<a.size()-1;i++)
            {
                if(a[i]!=a[i+1])
                {
                    cout<<w[i]<<endl;
                    break;
                }
                else
                {
                    cout<<w[i];
                }
             }
            v.clear();
            a.clear();
            w.clear();
        }
    }
}
