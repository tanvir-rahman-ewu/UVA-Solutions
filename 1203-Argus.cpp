#include<bits/stdc++.h>
using namespace std;

struct query
{
    int q_num;
    int period;
    int initial;


    query(int q, int p, int i)
    {
        q_num = q;
        period = p;
        initial = i;
    }
};

struct compare
{
    bool operator() (const query &a, const query &b)
    {
        if(a.period == b.period)
        {
            return a.q_num > b.q_num;
        }
        else
        {
            return a.period > b.period;
        }
    }
};

int main()
{
    priority_queue<query, vector<query>, compare> pq;

    string reg;

    int t, q, p, k;


        while(cin >> reg)
        {
            if(reg == "#") break;

            cin >> q >> p;

            pq.push(query(q, p, p));
        }

        scanf("%d", &k);

        for(int i = 0; i < k; i++)
        {
            query temp = pq.top();

            pq.pop();

            cout << temp.q_num << endl;

            temp.period += temp.initial;

            pq.push(temp);

        }

}
