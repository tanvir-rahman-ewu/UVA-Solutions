#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;
//BASE CLASS//
class Medicine{
    protected:
        string name;
        float price;
        int piece;
        static int count;
    public:
        //no argumnet constructor//
        Medicine():name("0"),price(0.0),piece(0)
        {
            ++count;
        }
        //multi argument constructor//
        Medicine(string a,float b,int c):name(a),price(b),piece(c){}

        virtual void setter(string a,float b,int c)
        {}
        virtual string getName(){};
        virtual float getPrice(){};
        virtual int getPiece(){};
        virtual void display(){};
        int getCount()
        {
            return count;
        }



};
int Medicine::count=0;
//*DERIVED CLASS 1*//
class Tablet:public Medicine{
    public:
        void setter(string a,float b,int c)
        {
            name=a;
            price=b;
            piece=c;
        }
        string getName()
        {
            return name;
        }
        float getPrice()
        {
            return price;
        }
        int getPiece()
        {
            return piece;
        }
        void display()
        {
            cout<<"Name : "<<name<<" (Tablet) "<<endl;
            cout<<"Price Per Piece : "<<price<<"/="<<endl;
            cout<<"Piece Available : "<<piece<<endl;
        }
};
//*DERIVED CLASS 2*//
class Liquid:public Medicine{
     public:
        void setter(string a,float b,int c)
        {
            name=a;
            price=b;
            piece=c;
        }
        string getName()
        {
            return name;
        }
        float getPrice()
        {
            return price;
        }
        int getPiece()
        {
            return piece;
        }
        void display()
        {
            cout<<"Name : "<<name<<" (Liquid) "<<endl;
            cout<<"Price Per Piece: "<<price<<"/="<<endl;
            cout<<"Piece Available : "<<piece<<endl;
        }
};
//*DERIVED CLASS 3*//
class Capsule:public Medicine{
     public:
        void setter(string a,float b,int c)
        {
            name=a;
            price=b;
            piece=c;
        }
        string getName()
        {
            return name;
        }
        float getPrice()
        {
            return price;
        }
        int getPiece()
        {
            return piece;
        }
         void display()
        {
            cout<<"Name : "<<name<<" (Capsule) "<<endl;
            cout<<"Price Per Piece: "<<price<<"/="<<endl;
            cout<<"Piece Available : "<<piece<<endl;
        }


};
bool isTablet(Medicine* m)
{
    Tablet* t;
    if(t=dynamic_cast<Tablet*>(m))
    {
        return true;
    }
    else return false;

}
bool isLiquid(Medicine* m)
{
    Liquid* l;
    if(l=dynamic_cast<Liquid*>(m))
    {
        return true;
    }
    else return false;

}
bool isCapsule(Medicine* m)
{
    Capsule* c;
    if(c=dynamic_cast<Capsule*>(m))
    {
        return true;
    }
    else return false;

}
int main()
{
    //*MAIN MENU*//

    cout<<"\t\t\tEast West Pharmacy"<<endl<<endl;
    cout<<"\t\t\t Aftabnagar,Dhaka"<<endl;
     labelh:
    cout<<"................................................................................";
    cout<<"  Main Menu : "<<endl;
    cout<<"\t 1 . Search Medicine"<<endl;
    cout<<"\t 2 . All Medicine Available"<<endl;
    cout<<"\t 3 . Sell Medicine"<<endl;
    cout<<"\t 4 . Add Medicine"<<endl;
    cout<<"\t 5 . Sold Medicine"<<endl;
    cout<<"\t 6 . Quantity"<<endl;
    cout<<"\t 7 . Show Menu"<<endl;
    cout<<"\t 8 . Exit"<<endl;
    cout<<"................................................................................"<<endl;
    //*VARIABLE LIST*//

    int choice,catagory,quantity,d=0,i,add_number;
    string s_name;
    string sell_name;
    char y_n,p;

    //*CLASS RELEATED VARIABLE LIST*//

    Medicine* m[100];
    m[0]=new Tablet;
    m[0]->setter("Napa",2,50);

    m[1]=new Liquid;
    m[1]->setter("Tuska",2,50);

    m[2]=new Capsule;
    m[2]->setter("Vitamin",2,50);

    while(1)
    {
        cout<<"Enter choice of main manu : ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            //*SEARCH*//
        case 1:
            label:
            cout<<"Catagory : "<<endl<<endl<<" 1 . Tablet"<<endl<<" 2 . Liquid"<<endl<<" 3 . Capcul"<<endl<<endl;
            cout<<"Enter Catagory Number : ";
        while(1)
            {
            cin>>catagory;
            cout<<endl;
            if(catagory==1)
            {
                cout<<"Search Name : ";
                cin>>s_name;
                for(i=0;i<m[0]->getCount();i++)
                {
                    if(s_name==m[i]->getName() && isTablet(m[i])==true)
                    {
                        cout<<endl;
                        cout<<"Availabe"<<endl;
                        m[i]->display();
                        break;
                    }
                }
                if(i==m[i]->getCount())
                {
                    cout<<"Not Available";
                }



            }
            else if(catagory==2)
            {
                cout<<"Search Name:";
                cin>>s_name;
                for(i=0;i<m[0]->getCount();i++)
                {
                    if(s_name==m[i]->getName() && isLiquid(m[i])==true)
                    {
                        cout<<endl;
                        cout<<"Availabe"<<endl;
                        m[i]->display();
                        break;
                    }
                }
                if(i==m[i]->getCount())
                {
                    cout<<"Not Available";
                }

            }
            else if(catagory==3)
            {
                cout<<"Search Name:";
                cin>>s_name;
                for(i=0;i<m[0]->getCount();i++)
                {
                    if(s_name==m[i]->getName() && isTablet(m[i])==true)
                    {
                        cout<<endl;
                        cout<<"Availabe"<<endl;
                        m[i]->display();
                        break;
                    }
                }
                if(i==m[i]->getCount())
                {
                    cout<<"Not Available";
                }

            }
            else
            {
                cout<<"**Invalid Input**"<<endl<<endl;
                goto label;
            }
            cout<<endl;
            cout<<"Do You Want To Search More?(y/n) : ";
            cin>>y_n;
            cout<<endl;
            if(y_n=='y')
            {
                goto label;
            }
            else if(y_n=='n')
            {
                break;
            }
            else
            {
                cout<<"Invalid"<<endl;
            goto label;
            }
            }

            break;
            //*ALL MEDICINE AVAILABLE*//
        case 2:
            for(i=0;i<m[0]->getCount();i++)
            {
                m[i]->display();
                cout<<endl;
            }


            break;
            //*SELL MEDICINE*//
        case 3:
          /* label1: cout<<"Sell Medicine For : "<<endl<<endl<<" 1 . East West Hospital"<<endl<<" 2 . Public  "<<endl<<endl<<"Enter Choice:";
            cin>>choice;
            cout<<endl;
            if(choice==1)
            {
                while(1)
                {
                   label2: cout<<"Enter Medicine Name : ";
                    cin>>sell_name;
                    //search
                    for(i=0;i<;i++)
                    {
                        if(==sell_name)
                        {
                            d++;
                        }
                    }
                    if(d==0)
                    {
                        cout<<"Not Availabe"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"Enter Quantity : ";
                        cin>>quantity;
                    }
                    cout<<"Sell More (y/n) : ";
                    cin>>y_n;
                    if(y_n=='y')
                    {
                        goto label2;
                    }
                    else if(y_n=='n')
                    {
                        cout<<"Press P for Printing Slip";
                        cin>>p;
                    }


            }
            else if(choice==2)
            {
                cout<<"Enter Medicine Name : ";
                cin>>sell_name;
                //search
                 for(i=0;i<;i++)
                {
                    if(==sell_name)
                    {
                        d++;
                    }
                }
                if(d==0)
                {
                    cout<<"Not Availabe"<<endl;
                }
                else
                {
                    cout<<"Enter Quantity : ";
                    cin>>quantity;
                }
            }
            else
           {
               cout<<"**Invalid input**"<<endl<<endl;
               goto label1;

           }

            break;*/
            //*ADD MEDICINE*//

        case 4:/*

                cout<<"Which Type Of Medicine You Want To Want : "<<endl;
                cout<<" 1 . Tablet"<<endl<<" 2 . Liquid"<<endl<<" 3 . Capcul"<<endl<<endl;
                cin>>catagory;
                cout<<endl;
                cout<<"How Many Medeicine You Want To Add?"<<endl<<endl;
                cout<<"Enter Number : ";
                cin>>add_number;
                if(catagory==1)
                {
                    for(i=,i=<add_number;i++)
                        cout<<"Enter Medicine Name : "

                }
                else if(catagory==2)
                {
                     for(i=,i=<add_number;i++)
                         cout<<"Enter Medicine Name : "

                }
                  else if(catagory==3)
                {
                    for(i=,i=<add_number;i++)
                         cout<<"Enter Medicine Name : "

                }


            }


            break;*/
            //*SOLD MEDICINE*//

        case 5:
            break;
            //*QUANTITY*//

        case 6:
            break;
            //*SHOW MENU*//

        case 7:
            goto labelh;
            break;
            //*EXIT//

        case 8:
            cout<<"       | THANK YOU |     ";
             exit(1);
            break;

        default:
            cout<<"**Invalid Input**"<<endl<<endl;
            break;

        }

    }


}

