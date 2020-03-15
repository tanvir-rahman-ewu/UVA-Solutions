#include<bits/stdc++.h>
using namespace std;

int max_node;

int Binary_search(int node, int balls)
{
    int left = 2 * node;
    int right = left + 1;

    if(left < max_node && right < max_node)
    {
        if(balls & 1)
        {
            return Binary_search(left, (balls/2) + 1);
        }
        else
        {
            return Binary_search(right, balls / 2);
        }
    }
    else
    {
        return node;
    }
}
int main()
{
    int t, D, I;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &D, &I);

        max_node = pow(2.0, D);

        cout << Binary_search(1, I) << endl;
    }
    scanf("%d", &t);
}
