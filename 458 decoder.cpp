#include<bits/stdc++.h>
using namespace std;
int main()
{
     char c[1000];
     int l,j;
     while(gets(c))
     {
         for(j=0;c[j]!=NULL;j++);
         l=j;
         for(int i=0;i<l;i++)
         {
             printf("%c",c[i]-7);
         }
         printf("\n");
     }
     return 0;

}
