#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, N, K, c;

    scanf("%d",&N);

    for(i = 1; i <= N; i++)
    {
        scanf("%d", &K);

        int s = sqrt(K) + 1;

        printf("Case #%d: %d = ",i, K);

        c = 0;

        for(int j = 2; j < s; j++)
        {
            if(K % j == 0)
            {
                c++;

                if(c == 2)
                {
                    printf("%d * %d\n" ,j, K / j);
                    break;
                }
                printf("%d * %d = " ,j, K / j);
            }
        }
    }
}
