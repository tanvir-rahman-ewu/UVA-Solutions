#include<bits/stdc++.h>
using namespace std;
string rev(string a)
{
    string c;
    for(int i=a.size()-1;i>=0;i--)
    {
        c=c+a[i];
    }

    return c;
}
string add(string a,string b)
{
    string c="";
    int len1=a.size();
    int len2=b.size();
    if(len1<len2)
    {
        int temp;
        temp=len1;
        len1=len2;
        len2=temp;
        string t;
        t=a;
        a=b;
        b=t;
    }
    a=rev(a);
    b=rev(b);
    int t=0;
    int sum,s;
    for(int i=0;i<len1;i++)
    {
        if(i<len2)
        {
            sum=(a[i]-'0')+(b[i]-'0')+t;
            s=sum%10;
            c+=s+'0';
            t=0;
            if(sum>9)
            {
                t=1;
            }
            if(i==len1-1 && t==1)
            {
                c+='1';
            }
        }
        else
        {
            sum=(a[i]-'0')+t;
            s=sum%10;
            c+=s+'0';
            t=0;
            if(sum>9)
            {
                t=1;
            }
            if(i==len1-1 && t==1)
            {
                c+='1';
            }
        }
    }
    c=rev(c);
    return c;
}
int main()
{
    int n;
    string arr[5006];
    arr[0]="0";
    arr[1]="1";
    for(int i=2;i<=5000;i++)
    {
        arr[i]=add(arr[i-1],arr[i-2]);
    }
    while(scanf("%d",&n)!=EOF)
    {
        cout<<"The Fibonacci number for "<<n<<" is "<<arr[n]<<endl;
    }
}
