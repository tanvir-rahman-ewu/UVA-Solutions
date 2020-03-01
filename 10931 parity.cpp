#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,ar[1000],one;
    long int a;
    while(1)
    {
        i=0;
        one=0;
        scanf("%ld",&a);
        if(a==0)
        {
            break;
        }
        while(a!=0)
        {
             ar[i]=a%2;
             if(ar[i]==1)
             {
                 one++;
             }
             a=a/2;
             i++;
        }printf("The Parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",ar[j]);
        }
        printf(" is %d (mod 2).\n",one);
        }
        return 0;
}
