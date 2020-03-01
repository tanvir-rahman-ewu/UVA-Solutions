#include<bits/stdc++.h>
using namespace std;
int m,n,p;
map<string,int> M;

int mat[35][35];
int level[40];
char color[40];

void bfs(int source)
{
    memset(level,0,sizeof(level));
    memset(color,'w',sizeof(color));

    queue<int> q;
    q.push(source);

    color[source]='g';
    level[source]=0;

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();

        for(int i=0;i<m;i++)
        {
            if(mat[temp][i]==1 && color[i]=='w')
            {
                color[i]='g';
                level[i]=level[temp]+1;
                q.push(i);
            }
        }
        color[temp]='b';
    }
}
int main()
{
    int test_case,count=1;;
    string a,b;

    scanf("%d",&test_case);
    cin.ignore();

    cout<<"SHIPPING ROUTES OUTPUT"<<endl;

    while(test_case--)
    {
        cout<<endl<<"DATA SET  "<<count<<endl<<endl;
        count++;

        scanf("%d %d %d",&m,&n,&p);

        memset(mat,0,sizeof(mat));

        for(int i=0;i<m;i++)
        {
            string s;
            cin>>s;

            M[s]=i;
        }

        for(int i=0;i<n;i++)
        {

            cin>>a>>b;

            mat[M[a]][M[b]]=mat[M[b]][M[a]]=1;
        }

        for(int i=0;i<p;i++)
        {
            int size;

            scanf("%d",&size);

            cin>>a>>b;

            bfs(M[a]);

            if(level[M[b]]==0)
            {
                printf("NO SHIPMENT POSSIBLE\n");
            }
            else
            {
                printf("$%d\n",size*100*level[M[b]]);
            }

        }
    }
     cout<<endl<<"END OF OUTPUT"<<endl;
}
