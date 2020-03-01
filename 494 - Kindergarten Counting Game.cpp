
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    int i,len,count;
    while(getline(cin,input))
    {
        len=input.size();
        count=0;
        for(i=0;i<len;i++)
        {
            if(isalpha(input[i]) && !isalpha(input[i+1]))
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

