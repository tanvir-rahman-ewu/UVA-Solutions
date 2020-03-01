#include<iostream>
using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    while(n!=1)
    {
        t++;
        if(n%2!=0)
        {
            n=3*n + 1;

        }
        else
        {
            n=n/2;
        }
    }
    cout<<t;
}
