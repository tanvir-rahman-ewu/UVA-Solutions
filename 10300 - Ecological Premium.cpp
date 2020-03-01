#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,input;
    double n;
    vector<int> number;
    scanf("%d",&test_case);
    while(test_case--)
    {
        scanf("%lf",&n);
        for(int i=0;i<n;i++)
        {
           scanf("%d",&input);
           number.push_back(input);
        }
        double average=0;
        for(int i=0;i<n;i++)
        {
            average=average+number[i];
        }
        average=average/n;
        double count=0;
        for(int i=0;i<n;i++)
        {
            if(number[i]>average)
            {
                count++;
            }
        }
        double ans;
        char c='%';
        ans=(count*100.000)/n;
        printf("%0.3lf%c\n",ans,c);
        number.clear();
    }
    return 0;
}
