#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,n;
    string s;

    scanf("%d",&test_case);

    while(test_case--)
    {
        vector<string> v;
        int p=0;
        cin>>n;

        while(n--)
        {
            cin>>s;

            if(s=="RIGHT")
            {
                p++;
                v.push_back(s);
            }
            else if(s=="LEFT")
            {
                p--;
                v.push_back(s);
            }
            else
            {
                int i;
                cin>>s>>i;
                 if(v[i-1]=="RIGHT")
                 {
                     p++;
                     v.push_back(v[i-1]);
                 }
                 else
                 {
                     p--;
                     v.push_back(v[i-1]);
                 }
            }
        }

        printf("%d\n",p);
    }
}
