#include<bits/stdc++.h>
using namespace std;
int main()
{
        int test_case,a;
        string x;

        vector<char> v;
        scanf("%d",&test_case);
        getchar();
         int count=0;
        while(test_case--)
        {
            string s;
            getline(cin,s);

            for(int i=0;i<s.size();i++)
            {
                if(s[i]>64 && s[i]<91 || s[i]>96 && s[i]<123)
                {
                    if(s[i]>96)
                    {
                        s[i]=s[i]-32;
                    }
                    v.push_back(s[i]);

                }
            }
        }
            sort(v.begin(),v.begin()+v.size());

            v.push_back('0');
            vector<int> n;
            vector<char>c;
            c.push_back(v[0]);
            for(int i=0;i<v.size()-1;i++)
            {
                if(v[i]==v[i+1])
                {
                    count++;
                }
                else
                {
                    c.push_back(v[i+1]);
                    if(count==0)
                    {
                        n.push_back(1);
                    }
                    else
                    {
                        n.push_back(count+1);
                    }
                    count=0;
                }
            }

            for(int i=0;i<n.size();i++)
            {
                for(int j=0;j<n.size()-1;j++)
                {
                    if(n[j]<n[j+1])
                    {
                        int t;
                        char ch;
                        ch=c[j];
                        t=n[j];
                        n[j]=n[j+1];
                        c[j]=c[j+1];
                        n[j+1]=t;
                        c[j+1]=ch;
                    }
                }
            }
            c.erase(c.begin()+c.size()-1);
            for(int i=0;i<c.size();i++)
            {
                printf("%c %d\n",c[i],n[i]);
            }
}
