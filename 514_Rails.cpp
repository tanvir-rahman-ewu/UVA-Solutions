#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, a, x, last, j, i, flag;

    while(scanf("%d",&N) && N)
    {
        while(scanf("%d",&a) && a)
        {
            stack<int> s;
            vector<int> v;

            v.push_back(a);

            flag = 0;

            int is_stacked[1005];

            memset(is_stacked, 0, sizeof(is_stacked));

            for(int i = 0; i < N - 1; i++)
            {
                scanf("%d", &a);

                v.push_back(a);
            }

            last = 1;

            for(i = 0; i < N; i++)
            {
                x = v[i];

                if(!is_stacked[x])
                {
                    for(j = last; j <= x; j++)
                    {
                        s.push(j);

                        is_stacked[j] = 1;
                    }

                    s.pop();

                    last = j;
                }
                else
                {
                    if(is_stacked[x] && s.top() != x)
                    {
                        flag = 1;

                        break;
                    }
                    else
                    {
                        s.pop();
                    }
                }
            }

            if(flag || !s.empty())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }

        }

        cout << endl;
    }


}
