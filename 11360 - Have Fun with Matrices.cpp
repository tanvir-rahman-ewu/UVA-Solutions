#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,n,v,a,b,count=1;
    string s;

    scanf("%d",&test_case);

    while(test_case--)
    {
        int matrix[12][12];

        scanf("%d",&n);

        for (int i = 1; i <= n; ++ i)
        {
			scanf("%s",&matrix[i][1]);
		}

        scanf("%d",&v);

        while(v--)
        {
            cin>>s;

            if(s=="transpose")
            {
                int temp[n+1][n+1];

                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        temp[j][i]=matrix[i][j];
                    }
                }
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        matrix[i][j]=temp[i][j];
                    }
                }

            }
            else if(s=="row")
            {
                scanf("%d %d",&a,&b);

                for(int i=1;i<=n;i++)
                {
                    swap(matrix[a][i],matrix[b][i]);
                }
            }
            else if(s=="col")
            {
                scanf("%d %d",&a,&b);

                for(int i=1;i<=n;i++)
                {
                    swap(matrix[i][a],matrix[i][b]);
                }
            }
            else if(s=="inc")
            {
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        matrix[i][j]++;

                        if(matrix[i][j]==10)
                        {
                            matrix[i][j]=0;
                        }
                    }
                }
            }
            else if(s=="dec")
            {
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++)
                    {
                        matrix[i][j]--;

                        if(matrix[i][j]==-1)
                        {
                            matrix[i][j]=9;
                        }
                    }
                }
            }
        }

        printf("Case #%d\n",count);

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                printf("%d",matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        count++;
    }
}
