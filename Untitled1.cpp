#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int mn=99,mx=0,n,total=0;
    float avg,c=0;
    ifstream in;
    in.open("data.txt");
    while(!in.eof()){
        in>>n;
        if(n%2!=0){
            c+=1;
            total+=n;
            if(mx<n){
                mx=n;
            }
            if(mn>n){
                mn=n;
            }
        }
    }
    avg=total/c;
    cout<<"Total odd numbers addition: "<<total<<endl;
    cout<<"Maximum between odd numbers: "<<mx<<endl;
    cout<<"Minimum between odd numbers: "<<mn<<endl;
    cout<<"Average of odd numbers: "<<avg<<endl;
    ofstream out;
    out.open("outfile.txt");
    out<<"Total odd numbers addition: "<<total<<endl;
    out<<"Maximum between odd numbers: "<<mx<<endl;
    out<<"Minimum between odd numbers: "<<mn<<endl;
    out<<"Average of odd numbers: "<<avg<<endl;
    in.close();
    out.close();

    return 0;
}

