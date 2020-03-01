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

map<string,int> m;
map<string,pair<string,string> > mp;

void bfs()
{
    queue<string> q;

    string parent,temp;

    q.push(ans);

    m[ans]=0;
    mp[ans]=make_pair("0","0");


    while(!q.empty())
    {
        parent=q.front();
        q.pop();

        for(int i=0;i<9;i=i+3)
        {
            temp=parent;

            swap(temp[i],temp[i+1]);
            swap(temp[i+1],temp[i+2]);

            if(!m.count(temp))
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
        }

        for(int i=0;i<3;i++)
        {
            temp=parent;

            swap(temp[i],temp[i+6]);
            swap(temp[i+3],temp[i+6]);

            if(!m.count(temp))
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
        }
    }
}

void print(string a)
{
    if(mp[a].first=="0")
    {
        return;
    }

    cout<<mp[a].second;

    print(mp[a].first);


}
int main()
{
    bfs();
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
        if(!m.count(source))
        {
            printf("Not solvable\n");
        }
        else
        {
            cout<<m[source]<<" ";

            print(source);

            printf("\n");
        }
    }
}

