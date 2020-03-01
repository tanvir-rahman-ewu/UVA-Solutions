#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,c=1;

    scanf("%d",&test_case);
    cin.ignore();

    while(test_case--)
    {

        map<char,int> m;

        string s;

        cin>>s;

        stack<char> q;

        q.push(s[0]);

        int i=0;

        while(i<s.size())
        {
            if(i==0)
            {
                m[s[i]];
                i++;
            }
            else if(s[i]==q.top() && s[0]!=s[i])
            {
                q.pop();
                m[q.top()]++;
                i++;
            }
            else if(s[i-1]!=s[i] && s[i]!=s[i+1] && i>=0 && i<s.size()-1)
            {
                q.push(s[i]);
                m[s[i]]++;
                i++;
            }
            else if(s[i]==s[i+1] && i<s.size()-1)
            {
                m[s[i]]++;
                m[q.top()]++;
                i++;
            }
            else
            {
                i++;
            }
        }

        printf("Case %d\n",c);
        c++;

        for (std::map<char,int>::iterator it=m.begin(); it!=m.end(); it++)
        {
             cout<<it->first<<" = "<<it->second<<endl;
        }
        m.clear();
    }
}
