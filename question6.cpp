#include<iostream>
#include<string.h>
using namespace std;

class cricketer{
    protected:
        char *name;
        int age;
        int j_no;
        int num_played;
};

class batsman:protected cricketer{
    protected:
        int runstricken;
        float avg;
        int half_c;
        int full_c;
        float strick_rate;
    public:
        batsman(char *n,int a,int j,int num,int r,float av,int hac,int fuc,float str){
            cout<<"Constructor of batsman called-----"<<endl;
            name = new char[strlen(n)];
            strcpy(name,n);
            age=a;
            j_no=j;
            num_played=num;
            runstricken=r;
            avg=av;
            half_c=hac;
            full_c=fuc;
            strick_rate=str;
        }
        void get(){
            cout<<"--------------------------------------------------------------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Jersy number: "<<j_no<<endl;
            cout<<"No of ODIs played: "<<num_played<<endl;
            cout<<"Run Stricken: "<<runstricken<<endl;
            cout<<"No of half centuries: "<<half_c<<endl;
            cout<<"No of Full centuries: "<<full_c<<endl;
            cout<<"Strike rate: "<<strick_rate<<endl;

        }
};

class baller:protected cricketer{
    protected:
        char *type;
        int wickets;
        float runrate;
        float speed;
    public:
        baller(char *n,int a,int j,int num,int r,char *t,int w,float s){
            cout<<"Constructor of baller called-----"<<endl;
            name = new char[strlen(n)];
            strcpy(name,n);
            age=a;
            j_no=j;
            num_played=num;
            type= new char[strlen(t)];
            strcpy(type,t);
            wickets=w;
            runrate=r;
            speed=s;

        }
        void get(){
            cout<<"--------------------------------------------------------------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Jersy number: "<<j_no<<endl;
            cout<<"No of ODIs played: "<<num_played<<endl;
            cout<<"Type: "<<type<<endl;
            cout<<"No of wickets taken: "<<wickets<<endl;
            cout<<"RunRate: "<<runrate<<endl;
            cout<<"speed: "<<speed<<endl;
        }
};

int main(){
    batsman b("Rohit",50,18,205,20000,95.05,15,7,57.6);
    baller b1("Bhumra",30,289,108,25,"Pace",200,105.5); 
    b.get();
    b1.get();  
    return(0);
}