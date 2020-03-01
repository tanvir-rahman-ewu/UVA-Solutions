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
map<string,int> m;

string state[30];

int c=1;

void state_intial()
{
    for(int i=0;i<26;i++)
    {
        state[i]=string(1,i+97);
    }
}

void bfs()
{
    queue<string> q;

    string parent,temp,p;

    int i,start;

    for(i=0;i<26;i++)
    {
        p=string(1,i+97);

        q.push(p);

        m[p]=c++;
    }

    while(1)
    {
        parent=q.front();

        q.pop();

        start=parent[parent.size()-1]-96;

        for(i=start;i<26;i++)
        {
            temp=parent+state[i];

            m[temp]=c;

            c++;

            q.push(temp);

            if(c==83682)
            {
                return;
            }
        }

    }

}
int main()
{
    state_intial();
    bfs();

    string input;

    while(cin>>input)
    {
        if(!m.count(input))
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",m[input]);
        }
    }
}
