#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p="TAMI";
    string line;
    int arr[5]={1,1,2,1};
    int t,i,j,d,s;

    scanf("%d",&t);

    while(t>0)
    {
       int arr1[1000]={};
        s=0;

        cin>>line;

        for(i=0;i<p.length();i++)
        {
             d=0;

            for(j=0;j<line.length();j++)
            {
                if(p[i]==line[j])
                {
                    d++;
                }
            }

            arr1[s++]=d/(arr[i]);
        }

        sort(arr1,arr1+s);

        printf("%d\n",arr1[0]);

        t--;
    }
    return 0;

}
