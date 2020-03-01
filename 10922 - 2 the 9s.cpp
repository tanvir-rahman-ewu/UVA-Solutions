#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define inf (1<<30)

//4 Direction
//int dx[]= {1,0,-1,0};
//int dy[]= {0,1,0,-1};

//8 direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

//Knight Direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};

int add(string s)
{
    int sum=0,len;

    len=s.size();

    for(int i=0;i<len;i++)
    {
        sum=sum+s[i]-'0';
    }

    return sum;
}

int sum(int a)
{
    int sum=0;

    while(a!=0)
    {
        sum=sum+a%10;

        a=a/10;
    }

    return sum;
}
int main()
{
    int sum_of_digit,degree;

    string input;

    while(cin>>input && input!="0")
    {
        sum_of_digit=add(input);

        if(sum_of_digit%9!=0)
        {
            cout<<input<<" is not a multiple of 9."<<endl;

            continue;
        }

        degree=1;

        while(sum_of_digit!=9)
        {
            sum_of_digit=sum(sum_of_digit);

            degree++;
        }

        cout<<input<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;

    }
}
