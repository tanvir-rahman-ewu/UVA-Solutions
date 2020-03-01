#include<bits/stdc++.h>
using namespace std;
double f(double a)
{
    double ans;
    ans = (a*a*a) - a -2;
    return ans;
}
int main()
{
    double a,b;
    cin>>a>>b;
   double mid1,mid2;

   while(1)
   {
       mid1=(a+b)/2;
       if(f(mid1)>0)
       {
           b=mid1;
       }
       else if(f(mid1)<0)
       {
           a=mid1;
       }
       mid2=(a+b)/2;
       if(mid1<mid2)
       {
           swap(mid1,mid2);
       }
       if(mid1-mid2<0.0009)
       {
           break;
       }
   }
   printf("\nDecimal : %lf\n",mid1);
   int i=mid1;
   double point=mid1-i;
   vector<int> v;
   vector<int> w;
   while(i!=0)
   {
       v.push_back(i%2);
       i=i/2;
   }
   cout<<"Binary : ";
   for(int j=v.size()-1;j>=0;j--)
   {
       cout<<v[j];
   }
   cout<<".";
    while(1)
    {
        point=point*2;
        if(point>1)
        {
            int temp=point;
            w.push_back(temp);
            point=point-temp;
        }
        else
        {
             w.push_back(int(point));
        }
        if(point==1.000)
        {
            break;
        }
    }
    for(int j=0;j<w.size();j++)
    {
        cout<<w[j];
    }
    cout<<endl;
}

