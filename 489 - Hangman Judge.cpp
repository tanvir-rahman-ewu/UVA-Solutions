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
    int n,len,i,stroke;

    string solution,guess;

    map<char,int> m;

    while(scanf("%d",&n) && n>0)
    {
        bool visit[27]={false};
        getchar();

        cin>>solution>>guess;

        len=solution.size();

        for(i=0;i<len;i++)
        {
            m[solution[i]]++;
        }

        len=guess.size();

        stroke=0;

        for(i=0;i<len && stroke<=6 && m.size()!=0;i++)
        {
            if(m.count(guess[i]))
            {
                m.erase(guess[i]);
            }
            else
            {
                stroke++;

                if(stroke==7)
                {
                    break;
                }
            }
        }

        printf("Round %d\n",n);

        if(stroke==7)
        {
            printf("You lose.\n");
        }
        else if(m.size()==0)
        {
            printf("You win.\n");
        }
        else
        {
            printf("You chickened out.\n");
        }

        m.clear();
    }
}
