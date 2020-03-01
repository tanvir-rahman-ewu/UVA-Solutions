#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string sum;
    int count=0,i;
    while(cin>>s)
    {
        if(s[0]=='0')
        {
            break;
        }
        if(count==0)
        {
            sum=s;
            count++;
            reverse(sum.begin(),sum.end());
        }
        else
        {
            reverse(s.begin(),s.end());
            if(sum.size()>s.size())
            {
                swap(sum,s);
            }
            cout<<s<<endl<<sum<<endl;
        }
    }
}
