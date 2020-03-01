#include<bits/stdc++.h>
using namespace std;

vector<string> words;

int bfs(string start, string finish)
{
    int cnt = 0;

    queue<string> q;

    map<string, int> m;

    q.push(start);

    m[start] = 0;

    while(!q.empty())
    {
        string temp = q.front();

        if(temp == finish)
        {
            return m[temp];
        }

        q.pop();

        for(int i = 0; i < words.size(); i++)
        {
            string word = words[i];

            if(temp.length() == word.length())
            {
                int c = 0;

                for(int j = 0; j < temp.length(); j++)
                {
                    if(temp[j] != word[j])
                    {
                        c++;
                    }
                }

                if(c == 1 && m.find(word) == m.end())
                {
                    q.push(word);

                    m[word] = m[temp] + 1;
                }
            }
        }
    }

    return -1;
}
int main()
{
    int N, i, ans;

    string word, start, finish, fullline;

    scanf("%d",&N);

    for(i = 0; i < N; i++)
    {
        while(cin >> word && word != "*")
        {
            words.push_back(word);
        }
        cin.ignore();

        while(getline(cin, fullline) && fullline != "")
        {
            stringstream s(fullline);

            s >> start >> finish;

            ans = bfs(start, finish);

            cout << start << " " << finish << " " << ans << endl;
        }

        if(i != N-1)
        {
            cout << endl;
        }

        words.clear();
    }
}
