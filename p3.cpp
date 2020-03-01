#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,c=0;
   cin>>a;
   for(int i=1;i<=a/2;i++)
   {
       if(a%i==0)
       {
           if(i*i==a)
           {
               c++;
           }
       }
   }
   if(c!=0)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
}
