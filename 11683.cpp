#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
int row, col, val, current, tot;

while(scanf("%d %d", &row, &col))
{
    if(!row && !col)
       break;

    vector<int> vec;
    tot = 0;

    for(int x=0; x<col; x++)
    {
        scanf("%d", &val);
        vec.push_back(val);
    }

    for(int y=0; y<vec.size(); y++)
    {
        if(y == 0)
        {
            tot = row - vec[y];
            current = vec[y];
        }
        else
        {
            if(vec[y] < current)
               tot = tot + (current - vec[y]);
        }
        current = vec[y];
    }
    printf("%d\n", tot);
}

return 0;
}
