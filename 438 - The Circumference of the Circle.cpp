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



int main()
{
    double x1,x2,x3,y1,y2,y3,r,h,k,M,N,O,X,Y,Z,D,E,F,H1,H2,C;


    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF)
    {
        H1=(2*(x1-x2)*(y1-y3)-2*(x1-x3)*(y1-y2));
        H2=(2*(y1-y3));

        if(H1==0 || H2==0)
        {
            swap(x1,x2);
            swap(y1,y2);

            H1=(2*(x1-x2)*(y1-y3)-2*(x1-x3)*(y1-y2));
            H2=(2*(y1-y3));

            if(H1==0 || H2==0)
            {
                 swap(x1,x3);
                 swap(y3,y3);

                 H1=(2*(x1-x2)*(y1-y3)-2*(x1-x3)*(y1-y2));
                 H2=(2*(y1-y3));
            }
        }

        M=(x1*x1-x2*x2)+(y1*y1-y2*y2);
        X=(x1*x1-x3*x3)+(y1*y1-y3*y3);

        h=(M*(y1-y3)-X*(y1-y2))/H1;

        k=(X-2*h*(x1-x3))/H2;

        r=sqrt((x1-h)*(x1-h)+(y1-k)*(y1-k));

        C=2*pi*r;

        printf("%.2lf\n",C);
    }
}
