#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    string s;
    int sum,c=1;
    scanf("%d",&test_case);
    getchar();
    while(test_case--)
    {
        getline(cin,s);
        sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='d' || s[i]=='g' || s[i]=='j' || s[i]=='m' || s[i]=='p' || s[i]=='t' || s[i]=='w')
            {
                sum+=1;
            }
            else if(s[i]=='b' || s[i]=='e' || s[i]=='h' || s[i]=='k' || s[i]=='n' || s[i]=='q' || s[i]=='u' || s[i]=='x')
            {
                sum+=2;
            }
            else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || s[i]=='l' || s[i]=='o' || s[i]=='r' || s[i]=='v' || s[i]=='y')
            {
                sum+=3;
            }
            else if(s[i]=='s'|| s[i]=='z')
            {
                sum+=4;
            }
            else
            {
                sum+=1;
            }
        }
        printf("Case #%d: %d\n",c,sum);
        c++;
    }
}
