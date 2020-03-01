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
    int n,start,size,i;

    string s,a,b;

    while(scanf("%d",&n) && n)
    {
        getchar();

        vector<string> v;

        for(i=0;i<n;i++)
        {
            getline(cin,s);

            v.push_back(s);
        }


        string ans[55];

        start=0;

        for(i=0;i<n;i++)
        {
            istringstream temp(v[i]);

            temp>>a>>b;

            size=0;

            while(1)
            {
                start++;

                if(start>n)
                {
                    start=1;
                }

                if(ans[start].size()==0)
                {
                    size++;
                }

                if(size==b.size())
                {
                    ans[start]=a;

                    break;
                }

            }
        }

        for(i=1;i<=n;i++)
        {
            cout<<ans[i];

            if(i!=n)
            {
                cout<<" ";
            }
        }
        printf("\n");
    }
}
