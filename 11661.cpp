#include<bits/stdc++.h>
using namespace std;

int main(){

    int L;
    string s;

    while(scanf("%d", &L) && L){

       cin >> s;

       int flag = 0, index = -1, mn = 3000000, i;

       for(i = 0; i < s.length(); i++)
       {
           if(s[i] == 'Z'){
                printf("0\n");
                break;
           }

           if(s[i]!='.')
            {
                if(index == -1)
                {
                    index = i;
                }
                else
                {
                    if(s[index] != s[i])
                    {
                        mn = min(mn, i - index);
                    }
                    index = i;
                }
           }
       }

        if(i == s.length())
        {
            cout << mn << endl;
        }
    }
}
