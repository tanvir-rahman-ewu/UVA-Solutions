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

long long int arr[25];

void factorial()
{
    arr[0]=1;

    for(int j=1;j<21;j++)
    {
        arr[j]=arr[j-1]*j;
    }
}
int main()
{

    factorial();


    int test_case,size,i,c=1;

    long long int ans;

    map<char,int> m;

    string s;

    scanf("%d",&test_case);
    getchar();

    while(test_case--)
    {
        ans=1;

        cin>>s;

        size=s.size();

        for(i=0;i<size;i++)
        {
            m[s[i]]++;
        }


        for(std::map<char,int>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second!=0)
            {
                ans=ans*arr[it->second];
            }
        }

        printf("Data set %d: %lld\n",c++,arr[size]/ans);

        m.clear();
    }
}
