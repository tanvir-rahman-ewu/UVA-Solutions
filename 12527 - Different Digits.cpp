#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j, val, c, cnt;
    vector<int> v;

    while(scanf("%d %d",&n, &m) == 2)
    {
        cnt =0;

        for(i = n ; i <= m; i++)
        {
            val = i;

            c = 0;

            while(val)
            {
                v.push_back(val % 10);

                val /= 10;
            }

            sort(v.begin(), v.end());

            for(j = 0; j < v.size() - 1; j++)
            {
                if(v[j] == v[j + 1])
                {
                    break;
                }
            }

            if(j == v.size() - 1)
            {
                cnt++;
            }

            v.clear();
        }

        printf("%d\n",cnt);

    }
}
