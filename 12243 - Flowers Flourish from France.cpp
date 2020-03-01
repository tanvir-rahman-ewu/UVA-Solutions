#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

int main()
{
    string s,a;

    bool flag;

    while(getline(cin,s) && s!="*")
    {
        flag=true;

        istringstream input(s);

        while(input>>a)
        {
            if(toupper(a[0])!=toupper(s[0]))
            {
                flag=false;
                break;
            }
        }

        if(flag)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}
