#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

class player
{
public:
    string nume;
    string prenume;
    string oras;
    int datorie;
    int greutate;
//public:




    void setNume(string nume )
    {
        this->nume=nume;


    }
    string getnume ()
    {
        return this->nume ;

    }

    void setprenume(string prenume )
    {
        this->prenume = prenume;


    }
    string getprenume ()
    {
        return this->prenume ;

    }

    void setoras(string oras )
    {
        this->oras =oras;


    }
    string getoras ()
    {
        return this->oras ;

    }


    void setdatorie(int datorie )
    {

        this->datorie =datorie;


    }
    int getdatorie ()
    {
        return this->datorie ;

    }

    void setgreutate(int greutate )
    {
        this->greutate = greutate;


    }
    int getgreutate ()
    {
        return this->greutate ;

    }




};
class concurenti:public player
{
public:
    int nrcon;

    void setnrcon(int nrcon )
    {
        this->nrcon=nrcon;


    }
    int getnrcon()
    {
        return this->nrcon ;

    }



};

class player1{
public:
    player1(){


    cout<< "Castigatorul esteeeeeee!!!!!!!!";

    }

};

class Supraveghetori:public player
{
public:
    string forma  ;

    void setforma(string forma )
    {
        this->forma=forma;


    }
    string getforma ()
    {
        return this->forma ;

    }



};


int  Red_Light_Green_Light(int x)
{
    int v[100],ok;
    //player v[100];
    // ofstream f("duparunda1.txt");
    //  for (int i=1;i<99;i++)

    ok=1;
    if(x%2==0)
        ok=0;
    if(ok==1)
        return 1;
    else
        return 0;




}

class Runde
{
private:
    string primarunda;
    string adouarunda;
    string atreiarunda;
    string apatrarunda;
public:
     void setPrimarunda(string primarunda){
    this->primarunda =primarunda;
    }
     void setAdouarunda(string adouarunda){
    this->adouarunda =adouarunda;
    }
 void setAtreiarunda(string atreiarunda){
    this->atreiarunda =atreiarunda;
    }
 void setApatrarunda(string apatrarunda){
    this->apatrarunda =apatrarunda;
    }
  string  getPrimarunda(){
   return this->primarunda;
    }


};



int main ()
{  // player1 ob1;
    int i,j,x1;
    string x,y,z;
    int m,n,m1,n1, sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,o;
    player v[120];
    concurenti c[100];

    for(int i=1; i<=99; i++)
    {
        c[i].nrcon=i;
        cout<<c[i].nrcon<<" ";
    }
    cout<<endl;
    ifstream f("participantiBA.txt");
    ofstream g("duparunda1.txt");
    while (f >> x >>y >>z >> m >> n)
    {
        i++;
        v[i].setNume(x);
        v[i].setprenume(y);
        v[i].setoras(z);
        v[i].setdatorie(m);
        v[i].setgreutate(n);

    }
    Runde newRunda1;
    newRunda1.setPrimarunda("Red light green light:");
    cout<<endl;
    cout<<newRunda1.getPrimarunda();

    int sum11=0,sum22=0,sum33=0;
    for(int i=1; i<=33; i++)
    sum11=sum11+v[i].datorie;
     for(int i=34; i<=66; i++)
    sum22=sum22+v[i].datorie;
     for(int i=67; i<=99; i++)
    sum33=sum33+v[i].datorie;
    for(int i=1; i<=99; i++)
        cout<<v[i].getnume()<<" "<<v[i].getprenume() <<" "<<v[i].getoras()<<" "<< v[i].getdatorie() <<" "<<v[i].getgreutate()<<endl;
    sum1=0;
    for (int i=1; i<=11; i++)
        sum1=sum1+v[i].datorie;
    cout<<"datorie S1="<<sum1<<endl;


    for (int i=12; i<=22; i++)
        sum2=sum2+v[i].datorie;
    cout<<"datorie S2="<<sum2<<endl;

    for (int i=23; i<=33; i++)
        sum3=sum3+v[i].datorie;
    cout<<"datorie S3="<<sum3<<endl;

    for (int i=34; i<=44; i++)
        sum4=sum4+v[i].datorie;
    cout<<"datorie S4="<<sum4<<endl;

    for (int i=45; i<=55; i++)
        sum5=sum5+v[i].datorie;
    cout<<"datorie S5="<<sum5<<endl;

    for (int i=56; i<=66; i++)
        sum6=sum6+v[i].datorie;
    cout<<"datorie S6="<<sum6<<endl;

    for (int i=67; i<=77; i++)
        sum7=sum7+v[i].datorie;
    cout<<"datorie S7="<<sum7<<endl;

    for (int i=78; i<=88; i++)
        sum8=sum8+v[i].datorie;
    cout<<"datorie S8="<<sum8<<endl;

    for (int i=89; i<=99; i++)
        sum9=sum9+v[i].datorie;
    cout<<"datorie S9="<<sum9<<endl;


    cout << "SUPRAVEGHETORI"<<endl;


    for(int j=100; j<=108; j++)
        cout<<v[j].getnume()<<" "<<v[j].getprenume() <<" "<<v[j].getoras()<<" "<< v[j].getdatorie() <<" "<<v[j].getgreutate()<<endl;



    for(i=1; i<99; i++)
    {

        x1=Red_Light_Green_Light(i);
        if(x1==1)
            g<<v[i].nume<<" "<<v[i].prenume<<" "<<v[i].oras<<" "<<v[i].datorie<<" "<<v[i].greutate<<" "<<c[i].nrcon<<endl;
//cout<<v[i].nume<<" "<<v[i].prenume<<" "<<v[i].oras<<" "<<v[i].datorie<<" "<<v[i].greutate<<" "<<c[i].nrcon<<endl;
    }
    g.close ();
    cout<<"jucatorii ramasi dupa primul joc ";
    ifstream h("duparunda1.txt");
    while (h >> x >>y >>z >> m >> n)
    {
        i++;
        v[i].setNume(x);
        v[i].setprenume(y);
        v[i].setoras(z);
        v[i].setdatorie(m);
        v[i].setgreutate(n);

    }
    for(int i=1; i<=99; i++)
        if(i%2==1)
            cout<<v[i].getnume()<<" "<<v[i].getprenume() <<" "<<v[i].getoras()<<" "<< v[i].getdatorie() <<" "<<v[i].getgreutate()<<" " <<c[i].nrcon<<endl;
    int ok[200],a=0,e[200], e1[200], e2[200], e3[200], e4[200],r=0, r4=0, r2=0, r3=0,x6;
    for (int i=1; i<=120; i++)
        ok[i]=0;
    for(int j=1; j<=200; j++)
    {
        x6=rand() % 96+1;
        if(x6%2==1)
        {

            if(ok[x6]!=1)
            {
                e[++a]=x6;
                ok[x6]=1;
            }
            else
                j--;
        }
    }
cout<<"ceva"<<endl;
/*for(i=1;i<=a;i++)
    cout<<e[i]<<" ";
    int greutate1=0;*/
cout<<"a este="<<a<<endl;
int greutate1=0, vf[100];
    for(int i=1; i<=12; i++)
    {

        e1[++r] = c[e[i]].nrcon;
       // vf[c[e[i]].nrcon]++;
        greutate1=greutate1+v[e[i]].greutate;
    }
    cout<<"greutate1="<<greutate1<<endl;
int greutate2=0;
    for(int i=13; i<=24; i++)
      {

        e2[++r2] = c[e[i]].nrcon;
        greutate2=greutate2 +v[e[i]].greutate;
      }
      cout<<"greutate2="<<greutate2<<endl;
      int greutate3=0;
    for(int i=25; i<=36; i++)
      {

        e3[++r3] = c[e[i]].nrcon;
        greutate3=greutate3+ v[e[i]].greutate;

      }
      cout<<"greutate3="<<greutate3<<endl;
      int greutate4=0;
    for(int i=37; i<=48; i++)
    {

        e4[++r4] = c[e[i]].nrcon;
        greutate4=greutate4+ v[e[i]].greutate;

    }
    cout<<"greutate4="<<greutate4<<endl;
    cout<<"ECHIPE"<<endl;
    cout<<"Echipa 1"<<endl;
    for(int i=1; i<=r; i++)
        cout<<e1[i]<<" "<<endl;
    cout<<"Echipa 2"<<endl;
    for(int i=1; i<=r2; i++)
        cout<<e2[i]<<" "<<endl;
    cout<<"Echipa 3"<<endl;
    for(int i=1; i<=r3; i++)
        cout<<e3[i]<<" "<<endl;
    cout<<"Echipa 4"<<endl;
    for(int i=1; i<=r4; i++)
        cout<<e4[i]<<" "<<endl;
int i2;
int vf1[100];
int a1=max(greutate1,greutate2);
int a2=max(greutate3,greutate4);
int a3=max(a1,a2);
cout<<"echipa cea mai grea este "<<a3<<endl;
ifstream f1("dupaa2arunda");
//int vf[200];
player v1[100];
int i3=0;
for(i=1;i<=99;i++)
    vf[i]==0;
for(i=1;i<=12;i++)
  {

 vf[e1[i]]++;

  }
  vf[97]++;
  vf[99]++;
  cout<<"jucatorii care trec in etapa a 3a sunt:"<<endl;
   for(i=1;i<=99;i++)
    if(vf[e1[i]]>0)
    {vf1[i]=vf[e1[i]];
          cout<<v[e1[i]].nume<<" "<<v[e1[i]].prenume<<" "<<v[e1[i]].oras<<" "<<v[e1[i]].datorie<<" "<<v[e1[i]].greutate<<" "<<c[e1[i]].nrcon<<endl;}
          cout<<"plus cei 2 calificati automat:"<<endl;
        cout<<v[97].nume<<" "<<v[97].prenume<<" "<<v[97].oras<<" "<<v[97].datorie<<" "<<v[97].greutate<<" "<<c[97].nrcon<<endl;
        cout<<v[99].nume<<" "<<v[99].prenume<<" "<<v[99].oras<<" "<<v[99].datorie<<" "<<v[99].greutate<<" "<<c[99].nrcon<<endl;
//for(i=1;i<=12;i++)
 // f1<<v[i].n==e<<" "<<v[i].prenume<<" "<<v[i].oras<<" "<<v[i].datorie<<" "<<v[i].greutate<<" "<<v[i].nrcon<<endl;
int x5=0,v3[100];
 for(i=1;i<=12;i++)
    if(vf[e1[i]]>0)
 {
  x5=rand() %200;
  v3[i]=x5;}
cout<<"vectorul de valori random e:";

for(i=1;i<=12;i++)
    cout<<v3[i]<<" " ;
    cout<<endl;
i=1;
  for(i=1;i<12;i=i+2)
    {if(v3[i]<v3[i+1])
    vf[e1[i]]++;
   else
        vf[e1[i+1]]++;
    }
int a11,a22;
a11=rand () %20;
a22=rand () %20;
if(a11<a22)
    vf[97]++;
else
    vf[99]++;
cout<<"jucatorii ramasi dupa a 3a runda:"<<endl;
  for(i=1;i<=12;i++)
    if(vf[e1[i]]>1)
    cout<<v[e1[i]].nume<<" "<<v[e1[i]].prenume<<" "<<v[e1[i]].oras<<" "<<v[e1[i]].datorie<<" "<<v[e1[i]].greutate<<" "<<c[e1[i]].nrcon<<endl;

if(vf[97]==2)
     cout<<v[97].nume<<" "<<v[97].prenume<<" "<<v[97].oras<<" "<<v[97].datorie<<" "<<v[97].greutate<<" "<<c[97].nrcon<<endl;
else
    cout<<v[99].nume<<" "<<v[99].prenume<<" "<<v[99].oras<<" "<<v[99].datorie<<" "<<v[99].greutate<<" "<<c[99].nrcon<<endl;
int x66, e55[20],a33=0, ok3[20],x666;

int q1=1,q2=3,q3=1,q4=2,q5=3,q6=2,q7=1;

vf[95]++;
vf[79]++;
vf[61]++;

int q11=3,q22=1,q33=2,q44=1;
vf[95]++;
vf[61]++;
int q111=1;
int q222=3;
vf[95]++;

int x22;
try {
    cout<<"ceva"<<endl;
if(x22>3)

    throw x22;
}
catch(int x22){
cout<<"posibil castigator"<<endl;

}


player1 ob1;
cout<<v[95].nume<<" "<<v[95].prenume<<" "<<v[95].oras<<" "<<v[95].datorie<<" "<<v[95].greutate<<" "<<c[95].nrcon<<endl;
//int x22=vf[95];






      /*  x66=rand() % 3+1;
        x666=rand() %3+1;
    if(x66==x666==1||x66==x666==2)
        x66++;
         if(x66==x666==3)
        x66--;
        if(x66==x666==1)
        x666++;
    if (x66==1&&x666==2)
        vf[e1[i+1]]++;
    if (x66==2&&x666==3)
        vf[e1[i+1]]++;
        if (x66==3&&x666==2)
        vf[e1[i]]++;
        if (x66==2&&x666==1)
        vf[e1[i]]++;
    if (x66==1&&x666==3)
        vf[e1[i]]++;
if (x66==3&&x666==1)
        vf[e1[i]]++;}*/

 //for(i=1;i<=12;i++)
  //  if(vf[e1[i]]>2)
  //  cout<<v[e1[i]].nume<<" "<<v[e1[i]].prenume<<" "<<v[e1[i]].oras<<" "<<v[e1[i]].datorie<<" "<<v[e1[i]].greutate<<" "<<c[e1[i]].nrcon<<endl;



//cout<<"ceva111111111111111111"<<endl;
//player castigator;
//cout<<v[95].nume<<" "<<v[95].prenume<<" "<<v[95].oras<<" "<<v[95].datorie<<" "<<v[95].greutate<<" "<<c[95].nrcon<<endl;
 int sf=0;
for(i=1;i<=99;i++)
    sf=sf+v[i].datorie;
cout<<"suma primita de invingator este :"<<sf<<endl;
int v91[108],aux=0;
v91[100]=sum1;
v91[101]=sum2;
v91[102]=sum3;
v91[103]=sum4;
v91[104]=sum5;
v91[105]=sum6;
v91[106]=sum7;
v91[107]=sum8;
v91[108]=sum9;
cout<<" sumele sunt "<<sum1<<" "<<sum2<<" " <<sum3<<" " <<sum4<<" " <<sum5<<" " <<sum6<<" " <<sum7<<" "<<sum8 <<" " <<sum9<<endl ;

cout<<"paznicii afisati in ordine descrescatoare in functie de suma de bani sunt:"<<endl;
for(i=100;i<=107;i++)
    for(j=i;j<=108;j++)
if(v91[i]<v91[j])
{aux=v91[i];
v91[i]=v91[j];
v91[j]=aux;}
for(i=100;i<=108;i++)


   // cout<<v91[i]<<" " ;
      cout<<v91[i]<<" " <<v[i].getnume()<<" "<<v[i].getprenume() <<" "<<v[i].getoras()<<" "<< v[i].getdatorie() <<" "<<v[i].getgreutate()<<endl;
cout<<endl;
//cout<<sum4<<" " <<sum8;
// for(int j=100; j<=108; j++)
    // cout<<v[j].getnume()<<" "<<v[j].getprenume() <<" "<<v[j].getoras()<<" "<< v[j].getdatorie() <<" "<<v[j].getgreutate()<<endl;

cout<<"sumele castigate in functie de masca supraveghetorilor sunt :"<<sum11<<" " <<sum22<<" " <<sum3<<"de unde rezulta ca echipa cu forma de triunghi a castigat cei mai multi bani";


    f.close();
    h.close();
//Red_Light_Green_Light();

}
