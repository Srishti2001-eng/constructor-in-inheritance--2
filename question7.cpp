#include<iostream>
#include<string.h>
using namespace std;


class batsman{
    protected:
        int runstricken;
        float avg;
        int half_c;
        int full_c;
        float strick_rate;
    public:
        batsman(int r,float av,int hac,int fuc,float str){
            cout<<"Constructor of batsman called-----"<<endl;
            runstricken=r;
            avg=av;
            half_c=hac;
            full_c=fuc;
            strick_rate=str;
        }
        void get(){
            cout<<"Run Stricken: "<<runstricken<<endl;
            cout<<"No of half centuries: "<<half_c<<endl;
            cout<<"No of Full centuries: "<<full_c<<endl;
            cout<<"Strike rate: "<<strick_rate<<endl;

        }
};

class baller{
    protected:
        char *type;
        int wickets;
        float runrate;
        float speed;
    public:
       baller(int r,char *t,int w,float s){
           cout<<"Constructor of baller called-----"<<endl;
            type= new char[strlen(t)];
            strcpy(type,t);
            wickets=w;
            runrate=r;
            speed=s;

        }
        void get(){
            cout<<"Type: "<<type<<endl;
            cout<<"No of wickets taken: "<<wickets<<endl;
            cout<<"RunRate: "<<runrate<<endl;
            cout<<"speed: "<<speed<<endl;
        }
};

class allrounder:protected batsman,protected baller{
    protected:
        int man_Of_match;
        int int_match;
    public:
        allrounder(int r,float av,int hac,int fuc,float str,int man,int match,int run,char *t,int w,float s):batsman(r,av,hac,fuc,str),baller(run,t,w,s){
            cout<<"Constructor of all rounder called-----"<<endl;
            man_Of_match=man;
            int_match=match;
        }
        void get(){
            batsman::get();
            baller::get();
            cout<<"No of man of the match : "<<man_Of_match<<endl;
            cout<<"No of international matches played: "<<int_match<<endl;
        }

};

int main(){
    allrounder a(20000,95.05,15,7,57.6,30,259,25,"Pace",200,105.5);
    a.get();
    return(0);
}