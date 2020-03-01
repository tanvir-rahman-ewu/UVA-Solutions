#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test_case,n,c=1,hgh,low_jump,high_jump;
    vector<int> h;

    scanf("%d",&test_case);

    while(test_case--)
    {
        low_jump=0;
        high_jump=0;

        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&hgh);
            h.push_back(hgh);
        }
        for(int i=0;i<n-1;i++)
        {
            if(h[i]>h[i+1])
            {
                low_jump++;
            }
            else if(h[i]<h[i+1])
            {
                high_jump++;
            }
            else
            {
                continue;
            }
        }
        printf("Case %d: %d %d\n",c,high_jump,low_jump);
        c++;
        h.clear();
    }
    return 0;
}
