#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,flag_length,circle_radius,flag_width;
    float green_area,red_area;
    scanf("%d",&test_case);
    while(test_case)
    {
        scanf("%d",&flag_length);

        flag_width=(6*flag_length)/10;

        circle_radius= flag_length/5;

        red_area=3.1416*(circle_radius*circle_radius);

        green_area= (flag_length*flag_width)- red_area;
        printf("%.2f %.2f\n",red_area,green_area);
        test_case--;

    }
}
