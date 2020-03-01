#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

string ans="123456789";

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

map<string,pair<string,string> > mp;

int bfs(string source)
{
    queue<string> q;


    string parent,temp;

    q.push(source);
    m[source]=1;
    mp[source]=make_pair("0","0");


    while(!q.empty())
    {
        parent=q.front();
        q.pop();

        if(parent==ans)
        {
            return m[parent];
        }

        for(int i=0;i<9;i=i+3)
        {
             temp=parent;

            swap(temp[i],temp[i+1]);
            swap(temp[i],temp[i+2]);

            if(!m[temp])
            {
                m[temp]=m[parent]+1;

                q.push(temp);

                if(i==0)
                {
                    mp[temp]=make_pair(parent,"H1");
                }
                else if(i==3)
                {
                    mp[temp]=make_pair(parent,"H2");
                }
                else
                {
                    mp[temp]=make_pair(parent,"H3");
                }
            }
            if(parent==ans)
            {
                return m[parent];
            }
        }

        for(int i=0;i<3;i++)
        {
            temp=parent;

            swap(temp[i],temp[i+3]);
            swap(temp[i+3],temp[i+6]);

            if(!m[temp])
            {
                m[temp]=m[parent]+1;

                q.push(temp);

                if(i==0)
                {
                    mp[temp]=make_pair(parent,"V1");
                }
                else if(i==1)
                {
                    mp[temp]=make_pair(parent,"V2");
                }
                else
                {
                    mp[temp]=make_pair(parent,"V3");
                }

            }
            if(parent==ans)
            {
                return m[parent];
            }
        }
    }
    return -1;
}

void print(string a)
{
    if(mp[a].first=="0")
    {
        return;
    }

    print(mp[a].first);

    cout<<mp[a].second;
}
int main()
{
    char c;
    int i,a;

    while(scanf("%c",&c) && c!='0')
    {
        string source;
        getchar();
        source.push_back(c);

        for(i=0;i<8;i++)
        {
            scanf("%c",&c);
            getchar();

            source.push_back(c);
        }

        a=bfs(source);

        if(a!=-1)
        {
            printf("%d ",a-1);

            print(ans);

            printf("\n");
        }
        else
        {
            printf("Not solvable\n");
        }


        mp.clear();

    }
}
