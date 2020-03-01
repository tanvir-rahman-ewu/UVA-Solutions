#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x, y;

    point()
    {

    }

    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

int visited[7][7];

#define N 0
#define S 1
#define E 2
#define W 3

pair<point, point> p;

map<point2, int> m;

int main()
{
    point start, finish, w1s, w2s, w3s, w1f, w2f, w3f;

    while(scanf("%d %d %d %d", &start.x, &start.y, &finish.x, &finish.y) && start.x + start.y)
    {
        scanf("%d %d %d %d",&w1s.x, &w1s.y, &w1f.x, &w1f.y);
        scanf("%d %d %d %d",&w2s.x, &w2s.y, &w2f.x, &w2f.y);
        scanf("%d %d %d %d",&w3s.x, &w3s.y, &w3f.x, &w3f.y);


        if(w1s.x == w1f.x) /// vertical line
        {
            for(int i = w1s.y + 1; i <= w1f.y; i++)
            {
                point p1(i, w1s.x);
                point p2(i, w1s.x + 1);

                point2 pp;

                pp.p1.x =i;
                pp.p1.y = w1s.x;

                pp.p2.x = i;
                pp.p2.y = w1s.x + 1;
            }
        }
        else /// horizontal line
        {
            for(int i = w1s.x + 1; i <= w1f.x; i++)
            {

            }
        }

        if(w2s.x == w2f.x)
        {

        }
        else
        {

        }

        if(w3s.x == w3f.x)
        {

        }
        else
        {

        }

    }
}
