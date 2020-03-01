#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,player_number,player,pass_number,case_number=1;
    scanf("%d",&test_case);
    while(test_case)
    {
        scanf("%d%d%d",&player_number,&player,&pass_number);
        if(player_number==(player+pass_number))
        {
            printf("Case %d: %d\n",case_number,player_number);
        }
        else if(player_number>(player+pass_number))
        {
            printf("Case %d: %d\n",case_number,player+pass_number);
        }
        else
        {
            printf("Case %d: %d\n",case_number,(player+pass_number)-player_number);
        }
        case_number++;
        test_case--;
    }

}
