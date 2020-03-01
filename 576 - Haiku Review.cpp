#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="e/o/i")
        {
            break;
        }
        int tag=0;
        int t=0;
        int c1=0,c2=0,c3=0;
        for(int i=0;i<s.size();i++)
        {

            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' )
            {
                tag++;
            }
            else
            {
                if(t==0)
                {
                    if(tag!=0)
                    {
                        c1++;
                        tag=0;
                    }

                }
                else if(t==1)
                {
                    if(tag!=0)
                    {
                        c2++;

                        tag=0;
                    }

                }
                else if(t==2)
                {
                    if(tag!=0)
                    {
                        c3++;
                        tag=0;
                    }

                }
            }
            if(s[i]=='/')
            {
                t++;
            }
        }
            if(s[s.size()-1]=='a'||s[s.size()-1]=='i'||s[s.size()-1]=='o'||s[s.size()-1]=='u'||s[s.size()-1]=='e'||s[s.size()-1]=='y')
            {
                c3++;
            }
            if(c1==5 && c2==7 && c3==5)
            {
                cout<<'y'<<endl;
            }
            else if(c1!=5)
            {
                cout<<'1'<<endl;
            }
            else if(c1==5 && c2!=7)
            {
                cout<<'2'<<endl;
            }
            else if(c1==5 && c2==7 && c3!=5)
            {
                cout<<'3'<<endl;
            }
    }
}
