#include<bits/stdc++.h>
using namespace std;

map<string, string> persons;
map<string, vector<string> > parents;

void resolve(string child, string father, string mother) {
    if (persons.find(father) == persons.end()) {
        resolve(father, parents[father][0], parents[father][1]);
    }

    if (persons.find(mother) == persons.end()) {
        resolve(mother, parents[mother][0], parents[mother][1]);
    }

    bool has_gene = false;

    if (persons[father] != "non-existent" && persons[mother] != "non-existent") {
        has_gene = true;
    }  else if (persons[father] == "dominant" || persons[mother] == "dominant") {
        has_gene = true;
    }

    if (has_gene) {
        if (persons[father] == "dominant" && persons[mother] == "dominant") {
            persons[child] = "dominant";
        } else if (persons[father] == "dominant" && persons[mother] == "recessive") {
            persons[child] = "dominant";
        } else if (persons[father] == "recessive" && persons[mother] == "dominant") {
            persons[child] = "dominant";
        } else {
            persons[child] = "recessive";
        }
    } else {
        persons[child] = "non-existent";
    }
}

struct Person{
    string name, gene;

    Person(string a, string b)
    {
        name = a; gene = b;
    }

    bool operator<(const Person& p) const
    {
        return name < p.name;
    }
};

vector<Person> v;

int main()
{
    int n;
    string a, b;

    cin >> n;

    while (n--)
    {
        cin >> a >> b;

        if (b == "non-existent" || b == "recessive" || b == "dominant") {
            persons[a] = b;
        } else {
            parents[b].push_back(a);
        }
    }

    for(map<string, vector<string> >:: iterator it = parents.begin(); it != parents.end(); it++)
    {
        resolve(it->first, (it->second)[0], (it->second)[1]);
    }

    for(map<string, string> :: iterator it = persons.begin(); it != persons.end(); it++)
    {
        v.push_back(Person(it->first, it->second));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].name << " " << v[i].gene << endl;
    }

}
