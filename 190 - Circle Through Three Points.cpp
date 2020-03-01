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


void print(double h,double k,double r,double D,double E,double F)
{

        if(h<0)
        {
            printf("(x + %.3lf)^2 + ",-1*h);
        }
        else if(h>0)
        {
            printf("(x - %.3lf)^2 + ",h);
        }
        else
        {
            printf("x^2 + ");
        }

        if(k<0)
        {
            printf("(y + %.3lf)^2 = %.3lf^2\n",-1*k,r);
        }
        else if(k>0)
        {
            printf("(y - %.3lf)^2 = %.3lf^2\n",k,r);
        }
        else
        {
            printf("y^2 = %.3lf^2\n",r);
        }

        printf("x^2 + y^2 ");

        if(D>0)
        {
            printf("+ %.3lfx ",D);
        }
        else if(D<0)
        {
            printf("- %.3lfx ",-1*D);
        }
        else
        {

        }

        if(E>0)
        {
            printf("+ %.3lfy ",E);
        }
        else if(E<0)
        {
            printf("- %.3lfy ",-1*E);
        }
        else
        {

        }

        if(F>0)
        {
            printf("- %.3lf = 0\n",F);
        }
        else if(F==0)
        {

        }
        else
        {
            printf("+ %.3lf = 0\n",-1*F);
        }
        printf("\n");
}



int main()
{
    double x1,x2,x3,y1,y2,y3,r,h,k,M,N,O,X,Y,Z,D,E,F,a1,b1,a2,b2,a3,b3,H1,H2;


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

        D=-2*h;
        E=-2*k;
        F=(r*r)-(h*h+k*k);



        print(h,k,r,D,E,F);

    }
}
