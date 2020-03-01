#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char,int> m;

    m['B']=1;
    m['P']=1;
    m['F']=1;
    m['V']=1;

    m['C']=2;
    m['G']=2;
    m['J']=2;
    m['K']=2;
    m['Q']=2;
    m['S']=2;
    m['X']=2;
    m['Z']=2;

    m['D']=3;
    m['T']=3;

    m['L']=4;

    m['M']=5;
    m['N']=5;

    m['R']=6;

    while(cin>>s)
    {
        int s_size=s.size();

        for(int i=0;i<s_size;i++)
        {
            if(i==0 && m[s[i]])
            {
                cout<<m[s[i]];
            }
            else if(m[s[i]]!=m[s[i-1]] && m[s[i]])
            {
                cout<<m[s[i]];
            }
        }
        printf("\n");
    }
}
