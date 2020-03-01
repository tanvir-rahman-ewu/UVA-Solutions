#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    scanf("%d",&test_case);
    getchar();
    vector<string> s;
    string input;
    while(test_case--)
    {
        getline(cin,input);
        s.push_back(input);
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s[i].size();j++)
        {
            if(s[i][j]==' ')
            {
                s[i].erase(s[i].begin()+j,s[i].end());
                break;
            }

        }
    }
    sort(s.begin(),s.end());
    s.push_back("1");
    vector<string> v;
    v.push_back(s[0]);
    vector<int> c;
    int count =0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            v.push_back(s[i+1]);
            if(count==0)
            {
                c.push_back(1);
            }
            else
            {
                c.push_back(count+1);
            }
            count=0;
        }
    }
    v.erase(v.begin()+v.size()-1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<c[i]<<endl;
    }
}
