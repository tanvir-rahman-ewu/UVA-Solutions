#include<bits/stdc++.h>
using namespace std;
int palindrome(string a)
{
    string b;
    int len,i,j=0;
    len=a.size();
    for(i=len-1;i>=0;i--)
    {
        b.push_back(a[i]);
    }
    if(b==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int mirror_palindrome(string a)
{
    int len,count=0;
    len=a.size();
    for(int i=0;i<len;i++)
    {
        if(a[i]=='A'||a[i]=='H'||a[i]=='I'||a[i]=='M'||a[i]=='O'||a[i]=='T'||a[i]=='U'||a[i]=='V'||a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='1'||a[i]=='8')
        {
            count++;
        }
    }
    if(count==len)
    {
        return 1;
    }
    else return 0;
}
int mirror_string(string a)
{
    int len,count=0;
    len=a.size();
    for(int i=0;i<len;i++)
    {
        if(a[i]=='E')
        {
            a[i]='3';
        }
        else if(a[i]=='S')
        {
            a[i]='2';
        }
        else if(a[i]=='Z')
        {
            a[i]='5';
        }
        else if(a[i]=='L')
        {
            a[i]='J';
        }
        else if(a[i]=='0' || a[i]=='O')
        {
            a[i]='O';
        }
    }
    if(palindrome(a)==1)
    {
        for(int i=0;i<len;i++)
        {
            if(a[i]=='A'||a[i]=='H'||a[i]=='I'||a[i]=='M'||a[i]=='O'||a[i]=='T'||a[i]=='U'||a[i]=='V'||a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='1'||a[i]=='0'||a[i]=='2'||a[i]=='3'||a[i]=='5'||a[i]=='J'||a[i]=='8')
            {
                count++;
            }
        }
        if(count==len)
        {
            return 1;
        }
        else return 0;
    }

    else
    {
        return 0;
    }
}
int main()
{
    string input;
    while(cin>>input)
    {
        if(palindrome(input)==1)
    {
        if(mirror_palindrome(input)==1)
        {
            cout<<input;
            printf(" -- is a mirrored palindrome.\n\n");

        }
        else
        {
            cout<<input;
            printf(" -- is a regular palindrome.\n\n");
        }
    }
    else if(mirror_string(input)==1)
    {
        cout<<input;
        printf(" -- is a mirrored string.\n\n");
    }
    else
    {
        cout<<input;
        printf(" -- is not a palindrome.\n\n");
    }
    }
    return 0;
}
