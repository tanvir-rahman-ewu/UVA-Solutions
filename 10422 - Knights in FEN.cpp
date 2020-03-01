#include<bits/stdc++.h>
using namespace std;

int ux[]={1,2,2,1,-1,-2,-2,-1};
int uv[]={-2,-1,1,2,2,1,-1,-2};

int ans=33000480;

int binary_to_decimal(string query)
{
    int ans=0,base=1;

    for(int i=4;i>=0;i--)
    {
        if(query[i]!='0' && query[i]!=' ')
        {
              ans=ans+ 1*base;
        }
        base=base*2;
    }

    return ans;
}
struct node
{
    int a,x,y;

    node(int m,int n,int o)
    {
        a=m;
        x=n;
        y=o;
    }

    bool operator <(const node& d)const
    {
        if(a==d.a)
        {
            if(x==d.x)
            {
                return y<d.y;
            }
            else
            {
                return x<d.x;
            }
        }
        else
        {
            return a<d.a;
        }
    }
};

int bfs(int source,int x,int y)
{
    queue<node> q;

    int xx,yy,pos,pos_h;

    q.push(node(source,x,y));

    map<node,int> m;

    m[node(source,x,y)]=1;


    while(!q.empty())
    {
        node parents=q.front();
        node temp=parents;

        if(parents.a==ans&& parents.x==2 && parents.y==2)
        {
            return m[parents];
        }

        q.pop();

        for(int i=0;i<8;i++)
        {
            temp=parents;

            xx=parents.x+ux[i];
            yy=parents.y+uv[i];

            if(xx>=0 && xx<5 && yy>=0 && yy<5)
            {

                pos_h=24-(5*parents.x+parents.y);
                pos=24-((5*xx)+yy);

                if((temp.a&(1<<pos))!=0)
                {
                    temp.a=temp.a^(1<<pos);
                    temp.a=temp.a^(1<<pos_h);
                }

                temp.x=xx;
                temp.y=yy;

                if(m[temp]==0)
                {
                    m[temp]=m[parents]+1;

                    if(m[temp]>11)
                    {
                        return 0;
                    }

                    q.push(temp);

                    if(temp.a==ans && temp.x==2 && temp.y==2)
                    {
                        return m[temp];
                    }

                }
            }
        }
    }

    return 0;

}

int main()
{
    int test_case,i,x,y,j,state,dec,temp,a;

    bool b;


    scanf("%d",&test_case);
    getchar();

    while(test_case--)
    {
        string input[5];
        b=1;
        state=0;

        for(i=0;i<5;i++)
        {
            getline(cin,input[i]);

            for(j=0;j<5 && b;j++)
            {
                if(input[i][j]==' ')
                {
                    x=i;
                    y=j;
                    b=0;
                }
            }

            dec=binary_to_decimal(input[i]);

            temp=0|dec;

            state=state|temp;

            if(i<4)
            {
                state=state<<5;
            }
        }

        a=bfs(state,x,y);

        if(!a)
        {
            printf("Unsolvable in less than 11 move(s).\n");
        }
        else
        {
            printf("Solvable in %d move(s).\n",a-1);
        }

    }

}
