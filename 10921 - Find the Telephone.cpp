#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    while(cin>>input)
    {
        for(int i=0;i<input.size();i++)
        {
            if(input[i]>64 && input[i]<68)
            {
                printf("%d",2);
            }
            else if(input[i]>67 && input[i]<71)
            {
                printf("%d",3);
            }
            else if(input[i]>70 && input[i]<74)
            {
                printf("%d",4);
            }
            else if(input[i]>73 && input[i]<77)
            {
                printf("%d",5);
            }
            else if(input[i]>76 && input[i]<80)
            {
                printf("%d",6);
            }
            else if(input[i]>79 && input[i]<84)
            {
                printf("%d",7);
            }
            else if(input[i]>83 && input[i]<87)
            {
                printf("%d",8);
            }
            else if(input[i]>86 && input[i]<91)
            {
                printf("%d",9);
            }
            else
            {
                printf("%c",input[i]);
            }
        }
        printf("\n");
        }
}
