#include<bits/stdc++.h>
using namespace std;

map<string, string> person;
map<string, vector<string> > parents;

struct desi{
    string name;
    string gene;

    desi(string a, string b)
    {
        name = a; gene = b;
    }

    bool operator<(const desi &d) const
    {
        return name < d.name;
    }
};
vector<desi> v;

void resolve(string child, string father, string mother)
{
    if(person.find(father) == person.end())
    {
        resolve(father, parents[father][0], parents[father][1]);
    }

    if(person.find(mother) == person.end())
    {
        resolve(mother, parents[mother][0], parents[mother][1]);
    }

    bool has_gene = false;

    if(person[father] != "non-existent" && person[father] !="non-existent")
    {
        has_gene = true;
    }
    else if(person[father] == "dominant" || person[mother] =="dominant") has_gene = true;

    if(has_gene)
    {
        if(person[father] == "dominant" && person[mother] == "dominant")
        {
            person[child] = "dominant";
        }
        else if(person[father] == "dominant" && person[mother] == "recessive")
        {
            person[child] = "dominant";
        }
        else if(person[father] == "recessive" && person[mother] == "dominant")
        {
            person[child] = "dominant";
        }
        else
        {
            person[child] = "recessive";
        }
    }
    else
    {
        person[child] = "non-existent";
    }

}

int main()
{
    int n;

    scanf("%d", &n);

    while(n--)
    {
        string a, b;

        cin >> a >> b;

        if(b !="non-existent" || b !="recessive" || b !="dominant")
        {
            person[b] = a;
        }
        else
        {
            parents[b].push_back(a);
        }
    }

    for(map<string, vector<string> >:: iterator it = parents.begin(); it != parents.end(); it++)
    {
        resolve(it->first, it->second[0], it->second[1]);
    }
    for(map<string, string >:: iterator it = person.begin(); it != person.end(); it++)
    {
        v.push_back(desi(it->first, it->second));
    }

    sort(v.begin(), v.end());
}
