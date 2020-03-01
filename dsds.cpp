#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string name;
    int i=1;
    while(cin>>name)
    {
        if(name=="Hajj")
        {
            cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else if(name=="Umrah")
        {
            cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
        }
        i++;
    }
}

