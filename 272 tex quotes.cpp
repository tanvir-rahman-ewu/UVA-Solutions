#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int len,i,tag;
    while(getline(cin,s))
    {
        string t;
        len=s.size();
        tag=1;
        for(i=0;i<len;i++)
        {
            if(s[i]==34 && tag%2!=0)
            {
                for(int j=0;j<2;j++)
                t.push_back(96);
                tag++;
            }
            else if(s[i]==34 && tag%2==0)
            {
                for(int j=0;j<2;j++)
                t.push_back(39);
                tag++;
            }
            else
            {
                t.push_back(s[i]);
            }
        }
        cout<<t<<"\n";
    }
}
