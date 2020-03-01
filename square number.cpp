#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,ans;

    while((scanf("%d%d",&a,&b))==1,1)
    {
        if(a==0 && b==0)
        {
            break;
        }
        int c=0;
        while(a<=b)
        {
           ans=sqrt(a);
           if(ans*ans==a)
           {
              c++;
           }
           a++;
        }
        printf("%d\n",c);
    }
}
