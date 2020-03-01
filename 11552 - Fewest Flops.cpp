#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    int test_case,k,i,j,l;
    string input;
    scanf("%d",&test_case);
    while(test_case--)
    {
        scanf("%d",&k);
        cin>>input;
        s.push_back(input);
    }
    for(i=0;i<s.size();i++)
    {

        int si=s[i].size();
        int count;
        for(j=0;j<s[i].size();j++)
        {
            for(l=0;l<s[i].size();l++)
            {
                if(s[i][j]==s[i][l] && j!=l)
                {
                    s[i].erase(s[i].begin(),s[i].begin()+l);
                }
            }
        }
        printf("%d",s[i].size());
    }
}
