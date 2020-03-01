#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    int c=1;
    vector<int> v;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int n;
        int t;

        scanf("%d",&n);
        t=n;
        while(n--)
        {
            int age;
            scanf("%d",&age);
            v.push_back(age);
        }
        sort(v.begin(),v.end());
        t=t/2;
        cout<<"Case "<<c<<": "<<v[t]<<endl;
        v.clear();
        c++;
    }
}
