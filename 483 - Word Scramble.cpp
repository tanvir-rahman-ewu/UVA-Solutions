#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input,output;
    int n,j;
    while(getline(cin,input))
    {

        j=-1;
        for(int i=0;i<input.size();i++)
        {
            if(input[i]==' ')
            {
                int n=i;
                for(int k=n-1;k>j;k--)
                {
                    printf("%c",input[k]);
                }
                printf(" ");
                j=i;
            }
        }
        for(int i=input.size();i>j;i--)
        {
            printf("%c",input[i]);
        }
        printf("\n");


    }
}
