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

int parent[100000];


int find_parent(int p)
{
    if(parent[p]==p)
    {
        return p;
    }

    return parent[p]=find_parent(parent[p]);
}
int main()
{
    int test_case;
    bool flag=false;

    scanf("%d",&test_case);

    while(test_case--)
    {

        for(int i=0;i<100000;i++)
        {
            parent[i]=i;
        }

        int n,a,b,correct=0,wrong=0;



        char c;

        scanf("%d",&n);
        getchar();

        string s;

        while(getline(cin,s))
        {


            if(s.size()==0)
            {
                break;
            }

            istringstream input(s);

            input>>c>>a>>b;

            int x=find_parent(a);
            int y=find_parent(b);

            if(c=='c')
            {
                if(x!=y)
                {
                    parent[x]=y;
                }
            }
            else
            {
                if(x==y)
                {
                    correct++;
                }
                else
                {
                    wrong++;
                }
            }


        }
        if(flag)
        {
            printf ("\n");
        }

        flag = true;

        printf ("%d,%d\n", correct,wrong);
    }
}
