#include<bits/stdc++.h>
using namespace std;

int row,col;

char mat[55][55];

int main()
{
    while(scanf("%d %d",&col,&row)!=EOF)
    {
        for(int i=0;i<row;i++)
        {
            scanf("%s",&mat[i]);
        }

        for(int i=0;i<row;i++)
        {
            printf("%s\n",&mat[i]);
        }
    }
}
