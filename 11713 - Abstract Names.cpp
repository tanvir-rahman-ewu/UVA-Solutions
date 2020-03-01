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

bool is_vowel(char a)
{
    if(a!='a' && a!='e' && a!='i' && a!='o' &&  a!='u' )
    {
        return false;
    }

    return true;
}

int main()
{
    int test_case,i,size_a,size_b;

    string a,b;

    scanf("%d",&test_case);
    getchar();

    while(test_case--)
    {
        cin>>a>>b;

        size_a=a.size();
        size_b=b.size();

        if(size_a!=size_b)
        {
            printf("No\n");
        }
        else
        {
            for(i=0;i<size_a;i++)
            {
                if(a[i]!=b[i])
                {
                    if(is_vowel(a[i])==false || is_vowel(b[i])==false)
                    {
                         printf("No\n");
                         break;
                    }

                }
            }

            if(i==size_a)
            {
                printf("Yes\n");
            }
        }

    }
}
