#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1,c1,d1,e1,a2,b2,c2,d2,e2;

    while(scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1)!=EOF)
    {
        scanf("%d %d %d %d %d",&a2,&b2,&c2,&d2,&e2);

        if(a1!=a2 && b1!=b2 && c1!=c2 && d1!=d2 && e1!=e2)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
}
